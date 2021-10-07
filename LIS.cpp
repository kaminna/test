#include <cstdio>
#include <algorithm>
#include <vector>
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
};
int main(int argc, char** argv) {
	int n, t;
    Solution sl;
    vector<int> vc; 
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &t);
        vc.push_back(t);
    }
	printf("%d\n", sl.lengthOfLIS(vc));
	return 0;
}
