class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();

        vector<int> minDist(n, n);   
        unordered_map<int, int> lastSeen;

        for (int i = 0; i < 2 * n; i++) {
            int idx = i % n;
            int val = nums[idx];

            if (lastSeen.count(val)) {
                int prev = lastSeen[val] % n;
                int dist = i - lastSeen[val];

                minDist[idx] = min(minDist[idx], dist);
                minDist[prev] = min(minDist[prev], dist);
            }

            lastSeen[val] = i;
        }

        // 
        vector<int> ans;
        for (int q : queries) {
            if (minDist[q] == n) ans.push_back(-1);
            else ans.push_back(minDist[q]);
        }

        return ans;
    }
};