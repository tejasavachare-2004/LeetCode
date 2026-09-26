class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2);
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int lower = -1;
        int upper = -1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] > target) {

                high = mid - 1;
            } else {
                if (nums[mid] == target) upper = mid; // Save if match found
                low = mid+1;
            }
        }
        low = 0, high = n - 1; // reset

        while(low<= high){
            int mid = (low+high)/2;

            if(nums[mid]>=target){
                lower = mid;
                high = mid-1;
            }else{
                low =mid+1;
            }
        }
        if (lower != -1 && nums[lower] != target) lower = -1;
        if (upper != -1 && nums[upper] != target) upper = -1;


        

        ans[0] = lower;

        ans[1] = upper;

        return ans;
    }
};