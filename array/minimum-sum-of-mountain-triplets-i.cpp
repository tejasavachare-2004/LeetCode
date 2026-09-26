class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int minsum = INT_MAX;

        int n= nums.size();
        
        for(int j =1; j<n-1; j++){
            for(int i = 0; i<j ;i++){
                if(nums[i]<nums[j]){
                    for(int k = j+1 ;k<n ;k++){

                        if(nums[k]<nums[j]){
                            int sum = nums[i]+nums[k]+nums[j];

                            minsum = min(minsum , sum);
                        }
                    }
                }
            }
        }

if (minsum == INT_MAX) return -1;
return minsum;

        


    }
};