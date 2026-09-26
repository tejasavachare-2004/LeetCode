class Solution {
public:

    int checkday(vector<int> &nums,  int m){
            int n = nums.size();
            int day =1 ;
            int load = 0;

            for(int i = 0 ; i<n; i++){
                if((load + nums[i])>m){
                    day +=1;
                    load = nums[i];
                }else{
                    load +=nums[i]; 
                }
            }

            return day;

        }



    int shipWithinDays(vector<int>& weights, int days) {
        
        







        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end() , 0);

        while(low<=high){

            int mid = (low+ high)/2;

            if(checkday(weights , mid)<=days){
                high = mid-1;
            }else{
                low  =mid +1;
            }
            
        }return low;




    }
};