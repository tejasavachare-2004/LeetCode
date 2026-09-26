class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> freq(n + 1, 0);  // Difference array

        // Step 1: Apply difference array technique
        for (const auto& q : queries) {
            int l = q[0], r = q[1];
            freq[l]++;
            if (r + 1 < n) {
                freq[r + 1]--;
            }
        }

        // Step 2: Build prefix sum to get actual frequency per index
        for (int i = 1; i < n; ++i) {
            freq[i] += freq[i - 1];
        }

        // Step 3: Check if each nums[i] can be reduced to 0
        for (int i = 0; i < n; ++i) {
            if (nums[i] > freq[i]) {
                return false;
            }
        }

        return true;
    }
};
