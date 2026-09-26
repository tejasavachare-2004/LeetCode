class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n = nums.size();
        long long sum  =0;

        for(int  i = 0;i<n;i++){
            int even = 0 ;
            int odd = 0;

            for(int k = i; k<n ;k++){
                if(nums[k]%2 == 0){
                    even++;
                }else{
                    odd++;
                }
            if(odd > 0 && 1LL * even * b <= 1LL * odd *a){
                sum++;
            }
            }
        }
            return sum;

    }
};