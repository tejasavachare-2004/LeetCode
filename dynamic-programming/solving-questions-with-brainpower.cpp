class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        vector<long long> dp(n + 1, 0);  // DP table initialized with 0

        for (int i = n - 1; i >= 0; i--) {
            int points = questions[i][0];
            int brainpower = questions[i][1];
            int nextIndex = i + brainpower + 1;

            // Solve the current question
            long long solve = points + (nextIndex < n ? dp[nextIndex] : 0);

            // Skip the current question
            long long skip = dp[i + 1];

            // Store the max result
            dp[i] = max(solve, skip);
        }

        return dp[0];  // Maximum points starting from question 0
    }
};
