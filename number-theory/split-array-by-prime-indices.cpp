class Solution {
public:
    // Helper function to check if index is prime
    bool isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) return false;
        }
        return true;
    }

    long long splitArray(vector<int>& nums) {
        long long sumA = 0, sumB = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (isPrime(i)) {
                sumA += nums[i];  // Prime index → Array A
            } else {
                sumB += nums[i];  // Non-prime index → Array B
            }
        }

        return abs(sumA - sumB);
    }
};
