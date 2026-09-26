class Solution {
public:
    int minSwaps(vector<int>& nums) {
          vector<int> evenPos, oddPos;
        int n = nums.size();

        // Step 1: Store indices of even and odd numbers
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                evenPos.push_back(i);
            } else {
                oddPos.push_back(i);
            }
        }

        int evenCount = evenPos.size();
        int oddCount = oddPos.size();

        // Step 2: If difference between counts > 1, not possible
        if (abs(evenCount - oddCount) > 1) return -1;

        // Step 3: Function to calculate swaps needed
        auto getSwaps = [](vector<int>& positions, int startIndex) {
            int swaps = 0;
            for (int i = 0; i < positions.size(); i++) {
                swaps += abs(positions[i] - (startIndex + 2 * i));
            }
            return swaps;
        };

        // Step 4: Try both patterns (start with even or odd)
        int minSwaps = INT_MAX;
        if (evenCount >= oddCount) {
            minSwaps = min(minSwaps, getSwaps(evenPos, 0)); // even at index 0
        }
        if (oddCount >= evenCount) {
            minSwaps = min(minSwaps, getSwaps(oddPos, 0));  // odd at index 0
        }

        return minSwaps;
    }
};