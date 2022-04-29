#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <climits>
#define OK 1
#define ERROR 0
#define INFINITY 1e9
#define MAX_VERTEX_NUM 30
typedef enum
{
    DG = 1,
    DN,
    UDG,
    UDN
} GraphKind;
typedef int Status;
struct VertexType //顶点集
{
    int num;                 //列车或飞机编号
    char start[10], end[10]; //出发地和到达地
    int starth, startm;      //出发时间
    int endh, endm;          //到达时间
    double cost = INFINITY;  //乘坐费用
};

typedef struct ArcCell //边集
{
    double cost = INFINITY;                  //乘坐费用
    int finalt = INFINITY, waitt = INFINITY; //乘坐时间和滞留时间
    int adj = MAX_VERTEX_NUM;                //用于中转次数
} ArcCell, AdjMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM];
typedef struct
{
    VertexType vexs[MAX_VERTEX_NUM];
    AdjMatrix arcs;
    int vexnum, arcnum;
    GraphKind kind = DN;
} MGraph;
bool visited[MAX_VERTEX_NUM];

Status CreateDN(MGraph &G)
{
    int i, j;
    G.arcnum = 0;
    //输入顶点集
    scanf("%d", &G.vexnum);
    for (i = 0; i < G.vexnum; ++i)
        scanf("%d %s %s %d:%d%d:%d%lf", &G.vexs[i].num, G.vexs[i].start, G.vexs[i].end, &G.vexs[i].starth, &G.vexs[i].startm, &G.vexs[i].endh, &G.vexs[i].endm, &G.vexs[i].cost);

    for (i = 0; i < G.vexnum; ++i)
        for (j = 0; j < G.vexnum; ++j)
            G.arcs[i][j].finalt = INFINITY;
    //处理边集
    for (int k = 0; k < G.vexnum; ++k)
    {
        for (i = 0; i < G.vexnum; i++)
        {
            if (!strcmp(G.vexs[k].end, G.vexs[i].start))
            {
                G.arcnum++;
                G.arcs[k][i].cost = G.vexs[k].cost;
                G.arcs[k][i].adj = 1;
                //时间转换为秒
                int tmpts1 = G.vexs[k].starth * 60 * 60 + G.vexs[k].startm * 60;
                int tmpte1 = G.vexs[k].endh * 60 * 60 + G.vexs[k].endm * 60;
                int tmpts2 = G.vexs[i].starth * 60 * 60 + G.vexs[i].startm * 60;
                int tmpte2 = G.vexs[i].endh * 60 * 60 + G.vexs[i].endm * 60;
                //飞行时间
                if (tmpts1 <= tmpte1)
                {
                    G.arcs[k][i].finalt = tmpte1 - tmpts1;
                }
                else
                {
                    G.arcs[k][i].finalt = 86400 - tmpts1 + tmpte1;
                }
                //滞留时间
                if (tmpte1 <= tmpts2)
                {
                    G.arcs[k][i].waitt = tmpts2 - tmpte1;
                }
                else
                {
                    G.arcs[k][i].waitt = 86400 - tmpte1 + tmpts2;
                }
                //对时间进行预处理
                G.arcs[k][i].finalt += G.arcs[k][i].waitt;
            }
        }
    }
    return OK;
}

int DS[MAX_VERTEX_NUM];
int PRE_STAYTIME[MAX_VERTEX_NUM];
int ShortestPath_DIJ_NOR(MGraph G, int v0, char *end, int funct)
{
    int v, w, final[MAX_VERTEX_NUM]; // final数组等同visited数组用于标记
    for (v = 0; v < G.vexnum; v++)   //循环 初始化
    {
        final[v] = 0;
        DS[v] = funct == 1 ? G.arcs[v0][v].cost : G.arcs[v0][v].adj;
        if (!strcmp(G.vexs[v0].start, G.vexs[v].start)) //把在同一个机场或车站的编号一同给标记掉，防止环
        {
            final[v] = 1;
            DS[v] = 0;
        }
    }
    DS[v0] = 0;
    final[v0] = 1; //初始化 v0顶点属于集合S
    //开始主循环 每次求得v0到某个顶点v的最短路径 并加v到集合S中
    v = 0;
    for (int i = 1; i < G.vexnum; i++)
    {
        int min = (funct == 1 ? INFINITY : MAX_VERTEX_NUM);
        for (w = 0; w < G.vexnum; w++)
        {
            //我认为的核心过程--选点
            if (!final[w]) //如果顶点w在V-S中
            {
                //这个过程最终选出的点 应该是选出当前V-S中与S有关联边
                //且权值最小的顶点 书上描述为 当前离V0最近的点
                if (DS[w] < min)
                {
                    min = DS[w];
                    v = w;
                }
            }
        }
        final[v] = 1;                  //选出该点后加入到合集S中
        for (w = 0; w < G.vexnum; w++) //更新当前最短路径和距离
        {
            /*在此循环中 v为当前刚选入集合S中的点
            则以点V为中间点 考察 d0v+dvw 是否小于 D[w] 如果小于 则更新
            比如加进点 3 则 若要考察 D[5] 是否要更新 就 判断 d(v0-v3) + d(v3-v5) 的和是否小于D[5]
            */
            int tmpt = min + (funct == 1 ? G.arcs[v][w].cost : G.arcs[v][w].adj);
            if (!final[w] && (tmpt < DS[w]) && min < (funct == 1 ? INFINITY : MAX_VERTEX_NUM))
            {
                DS[w] = tmpt;
            }
        }
    }
    if (funct == 2)
    {
        for (int i = 0; i < G.vexnum; i++)
        {
            if (!(DS[i] == 0 || DS[i] == (funct == 1 ? INFINITY : MAX_VERTEX_NUM)))
                DS[i] -= 1;
        }
    }
    //处理返回值
    //从列车或飞机编号v0到终点站end的所有路径中找出最小的返回对应的编号
    int ans = (funct == 1 ? INFINITY : MAX_VERTEX_NUM), minans = (funct == 1 ? INFINITY : MAX_VERTEX_NUM);
    for (int i = 0; i < G.vexnum; i++)
    {
        if (!strcmp(G.vexs[i].start, end) && minans > DS[i]) //打擂
        {
            minans = DS[i];
            ans = i;
        }
    }
    return ans;
}
int ShortestPath_DIJ_PLUS(MGraph G, int v0, char *end)
{
    int v, w, final[MAX_VERTEX_NUM]; // final数组等同visited数组用于标记
    for (v = 0; v < G.vexnum; v++)   //循环 初始化
    {
        final[v] = 0;
        DS[v] = G.arcs[v0][v].finalt;
        PRE_STAYTIME[v] = 0;
        if (!strcmp(G.vexs[v0].start, G.vexs[v].start)) //把在同一个机场或车站的编号一同给标记掉，防止环
        {
            final[v] = 1;
            DS[v] = 0;
        }
    }
    DS[v0] = 0;
    final[v0] = 1; //初始化 v0顶点属于集合S
    //开始主循环 每次求得v0到某个顶点v的最短路径 并加v到集合S中
    v = 0;
    for (int i = 1; i < G.vexnum; i++)
    {
        int min = INFINITY;
        for (w = 0; w < G.vexnum; w++)
        {
            //我认为的核心过程--选点
            if (!final[w]) //如果w顶点在V-S中
            {
                //这个过程最终选出的点 应该是选出当前V-S中与S有关联边
                //且权值最小的顶点 书上描述为 当前离V0最近的点
                if (DS[w] < min)
                {
                    min = DS[w];
                    v = w;
                }
            }
        }
        final[v] = 1;                  //选出该点后加入到合集S中
        for (w = 0; w < G.vexnum; w++) //更新当前最短路径和距离
        {
            /*在此循环中 v为当前刚选入集合S中的点
            则以点V为中间点 考察 d0v+dvw 是否小于 D[w] 如果小于 则更新
            比如加进点 3 则若要考察 D[5] 是否要更新 就 判断 d(v0-v3) + d(v3-v5) 的和是否小于D[5]
            */
            int tmpt = min + G.arcs[v][w].finalt;
            if (strcmp(G.vexs[v0].end, G.vexs[v].start)) //上一个最优有遗漏一个滞留时间，如果要中转就要加回去
            {
                tmpt += PRE_STAYTIME[v];
            }
            if (G.arcs[v][w].finalt != INFINITY && !strcmp(G.vexs[v].end, G.vexs[w].start)) //到终点站时没有滞留时间，要减去之前预处理加进来的滞留时间
            {
                tmpt -= G.arcs[v][w].waitt;
            }
            if (!final[w] && (tmpt < DS[w]) && min < INFINITY)
            {
                PRE_STAYTIME[w] = G.arcs[v][w].waitt; //下一个循环如果是要当作中转的就要加上这个滞留时间
                DS[w] = tmpt;
            }
        }
    }
    //最后对于直达的航班或列车，要减去之前预处理时加上的滞留时间
    for (int i = 0; i < G.vexnum; i++)
    {
        if (!strcmp(G.vexs[v0].end, G.vexs[i].start))
        {
            if (DS[i] > G.arcs[v0][i].finalt - G.arcs[v0][i].waitt)
                DS[i] = G.arcs[v0][i].finalt - G.arcs[v0][i].waitt;
        }
    }
    //处理返回值
    //从列车或飞机编号v0到终点站end的所有路径中找出最小的返回对应的编号
    int ans = INFINITY, minans = INFINITY;
    for (int i = 0; i < G.vexnum; i++)
    {
        if (!strcmp(G.vexs[i].start, end) && minans > DS[i]) //打擂
        {
            minans = DS[i];
            ans = i;
        }
    }
    return ans;
}

int FirstAdjVex(MGraph G, int v, int funct)
{
    if (v >= G.vexnum || v < 0)
        return -1;
    for (int i = 0; i < G.vexnum; ++i)
    {
        if ((funct == 1 && G.arcs[v][i].cost < INFINITY) || (funct == 2 && G.arcs[v][i].adj < MAX_VERTEX_NUM) || (funct == 3 && G.arcs[v][i].finalt < INFINITY))
            return i;
    }
    return -1;
}
int NextAdjVex(MGraph G, int v, int w, int funct)
{
    if (v >= G.vexnum || v < 0 || v == w || w >= G.vexnum)
        return -1;
    for (int i = w + 1; i < G.vexnum; i++)
    {
        if ((funct == 1 && G.arcs[v][i].cost < INFINITY) || (funct == 2 && G.arcs[v][i].adj < MAX_VERTEX_NUM) || (funct == 3 && G.arcs[v][i].finalt < INFINITY))
            return i;
    }
    return -1;
}
int lj[1000]; //路径
void DFS(MGraph G, int pre, int v, int step, int cost, int arrive, int funct)
{
    lj[step] = v;
    if (v == arrive) //到达终点
    {
        if (step && ((funct == 1 && (step && cost == DS[v])) || (funct == 2 && (cost - 1 == DS[v])) || (funct == 3 && (cost - G.arcs[pre][v].waitt == DS[v]))))
        {
            for (int i = 0; i < step; i++)
            {
                printf("%d->", lj[i] + 1);
            }
            printf("%d cost:%d\n", v + 1, DS[arrive]);
        }
        return;
    }
    for (int w = FirstAdjVex(G, v, funct); w >= 0; w = NextAdjVex(G, v, w, funct))
    {
        if (!visited[w])
        {
            visited[v] = true;
            if (funct == 1)
                DFS(G, v, w, step + 1, cost + G.arcs[v][w].cost, arrive, funct); //花费最少
            if (funct == 2)
                DFS(G, v, w, step + 1, cost + G.arcs[v][w].adj, arrive, funct); //最少中转
            if (funct == 3)
                DFS(G, v, w, step + 1, cost + G.arcs[v][w].finalt, arrive, funct); //最快到达
            visited[v] = false;
        }
    }
}
void DIJ(MGraph G, char *start, char *end, int funct) //整合
{
    int tmp = INFINITY, ans = MAX_VERTEX_NUM - 1, v = INFINITY, w = INFINITY;
    for (int i = 0; i < G.vexnum; i++)
    {
        if (!strcmp(G.vexs[i].start, start)) //找出从start出发的飞机或列车编号
        {
            if (funct == 1 || funct == 2)
            {
                ans = ShortestPath_DIJ_NOR(G, i, end, funct);
            }
            else
            {
                ans = ShortestPath_DIJ_PLUS(G, i, end);
            }
            if (tmp > DS[ans]) //打擂找出从start到end的列车或飞机编号v, w
            {
                tmp = DS[ans];
                v = i;
                w = ans;
            }
        }
    }
    //之前的循环把正确DS数组对应到其他的顶点了，要校正回去
    if (funct == 3)
        ShortestPath_DIJ_PLUS(G, v, end);
    else
        ShortestPath_DIJ_NOR(G, v, end, funct);
    //用DFS打印路径
    DFS(G, v, v, 0, 0, w, funct);
}

int main(int argc, char **argv)
{
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    MGraph G;
    CreateDN(G);
    DIJ(G, G.vexs[0].start, G.vexs[3].start, 2);  // A-B
    DIJ(G, G.vexs[0].start, G.vexs[10].start, 2); // A-C
    DIJ(G, G.vexs[0].start, G.vexs[5].start, 2);  // A-D
    DIJ(G, G.vexs[0].start, G.vexs[14].start, 2); // A-E
    return 0;
}