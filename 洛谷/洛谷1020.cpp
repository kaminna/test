#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> res;
        for(auto n : nums) {
            auto lb = lower_bound(res.begin(), res.end(), n);
            if(lb == res.end()) {
                res.push_back(n);
            }
            else {
                res[lb - res.begin()] = n;
            }
        }
        return res.size();
    }
    int lengthOfLS(vector<int>& nums) {
        vector<int> res;
        for(auto n : nums) {
            auto lb = upper_bound(res.begin(), res.end(), n,greater <int>());
            if(lb == res.end()) {
                res.push_back(n);
            }
            else {
                res[lb - res.begin()] = n;
            }
        }
        return res.size();
    }
};
int main(void) {
    Solution sl;
    int n,t;vector<int> vc;
    while(scanf("%d",&t)==1) vc.push_back(t);
    printf("%d\n%d\n", sl.lengthOfLS(vc), sl.lengthOfLIS(vc));
	return 0;
}
