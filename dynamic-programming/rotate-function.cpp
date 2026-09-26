class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        long f = 0;
        long sum = 0;

        for(int i = 0 ; i<n ;i++){
            sum+=nums[i];
            f +=(long)i*nums[i];
        }

        long ans =f;

        for(int i =1 ;i<n;i++){
            f += sum - (long)n*nums[n-i];
            ans = max(ans,f);
        }

        return ans;
    }
};