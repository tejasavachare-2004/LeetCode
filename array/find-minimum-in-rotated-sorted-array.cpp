class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int mini =INT_MAX;
        int n =  nums.size();
        int low  = 0;
        int high = n-1;

        while(low<= high){


            int mid =(low + high)/2;

            // left Sorted side
            if(nums[low]<=nums[mid]){
                mini =min(mini,nums[low]);
                low = mid+1;
            }else{
                // right sorted side 
                mini =min(mini,nums[mid]);
                high = mid-1; 
                // i have problem     
                }
        }

        return mini;
    }
};