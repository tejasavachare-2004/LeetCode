class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        int res = nums[0];

        int first_min = INT_MAX;
        int sec_min = INT_MAX;

        for(int i =1 ;i<n ;i++){
            if(first_min>nums[i]){
                sec_min = first_min;
                first_min=nums[i];
            }else if(sec_min>nums[i]){
                sec_min = nums[i];
            }
        }

        return res + first_min + sec_min;
    }
};