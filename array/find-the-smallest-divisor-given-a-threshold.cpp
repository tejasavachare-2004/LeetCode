class Solution {
public:
    
    int divbyd(vector<int>& nums , int d )
        {
            int sum = 0;

            for(int i =0 ; i<nums.size() ; i++){
                sum+= ceil((double)nums[i]/(double) d);

            }
            return sum;
        }



    int smallestDivisor(vector<int>& nums, int threshold) {
        int n =  nums.size();
        int maxi = *max_element(nums.begin(), nums.end());

        

        int low = 1;
        int high  = maxi;
        while(low<=high){

            int mid = (low+high)/2;

            if(divbyd(nums , mid)>threshold){
                low = mid+1;
            }else{
                high = mid-1;
            }

        }


        return low;






    }
};