class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {

        int n = nums.size();
        vector<long long> r(n, 1);

        long long m = 100000LL * 1000000000LL + 5LL;

        for (int i = n - 2; i >= 0; --i) {
            if (r[i + 1] >= m / nums[i + 1] + 1) {
                r[i] = m;
            } else {
                r[i] = r[i + 1] * nums[i + 1];
            }
        }

        vector<int> navo = nums;

        long long left = 0;

        for (int i = 0; i < n; ++i) {
            if (left == r[i]) {
                return i;
            }
            left += navo[i];
        }

        return -1;
    }
};