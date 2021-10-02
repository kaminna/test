$$
Dio的面包
$$

$time limit per test : 1 second$  
$memory limit per test : 256 megabytes$  

~~你会记得你吃过多少面包吗~~  
面包店有$n$种面包出售，价格为$a_i$，Dio有$target$的预算，但是他只打算买两种面包(各一个)来当早餐，请问Dio有多少种购买方案。

输入格式：  
两个正整数，$n$和预算$target$  
接下来一行n个数，代表面包的价格$a_i$。  
$(2 \leq n\leq 10^5)$
$(1 \leq a_i, target\leq 10^5)$

输出格式：  
输出一个正整数，代表答案可能的数量，并对1e9+7取余

样例输入：  
4 6  
2 5 3 5  
样例输出：  
1  
样例输入：  
4 10  
2 2 1 9  
样例输出：  
4