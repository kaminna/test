class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int n = releaseTimes.size(), time = releaseTimes[0], maxtime = releaseTimes[0];
        char ans = keysPressed[0], key = keysPressed[0];
        for (int i = 1; i < n; i++) {
            key = keysPressed[i];
            time = releaseTimes[i] - releaseTimes[i-1];
            if ((time > maxtime) || (time == maxtime && key > ans)) {
                maxtime = time;
                ans = key;
            }
        }
        return ans;
    }
};