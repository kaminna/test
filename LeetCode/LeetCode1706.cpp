class Solution {
public:
    vector<int> findBall(vector<vector<int>> &grid) {
        int n = grid[0].size();
        vector<int> ans(n);
        for (int j = 0; j < n; ++j) {
            int col = j; // 球的初始列
            for (auto &row : grid) {
                int dir = row[col];
                col += dir; // 移动球
                if (col < 0 || col == n || row[col] != dir) { // 到达侧边或 V 形
                    col = -1;
                    break;
                }
            }
            ans[j] = col; // col >= 0 为成功到达底部
        }
        return ans;
    }
};