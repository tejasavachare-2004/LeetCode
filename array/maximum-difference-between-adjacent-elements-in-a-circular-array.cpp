class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();

        int max_value = 0;

        for(int i =0 ; i<n ; i++){
            max_value = max(max_value,abs(nums[i] - nums[(i+1)%n]));
        }

        return max_value;
    }
};