class Solution {
public:


    int countfuct(vector<int>& nums ,int k ){
        int n =nums.size();

        int slot = 1;
        int slot_add = 0;

        for(int i =0 ; i<n;i++){
            if(slot_add+ nums[i]<=k){
                slot_add+=nums[i];
            }else{
                slot++;
                slot_add =nums[i];
            }
        }

        return slot;

    }


    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();

        if(n<k){
            return -1;
        }

        int low =*max_element(nums.begin(), nums.end());
        int high =  accumulate(nums.begin(), nums.end(),0);

        while(low<=high){
            
            int mid =(low +high)/2;
            
            int total = countfuct(nums,mid);

            if(total>k){
                low =mid +1;
            }else{
                high = mid-1;

            }
        }
        return low;
    }
};