class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n =  nums.size();

        if(n<3){return n;}

        int maxlen = 2;
        int cur  =2 ;
        for(int i  =2 ; i<n ;i++ ){
            if(nums[i] == nums[i-1]+nums[i-2]){
                cur++;
            }else{
                cur=2;
            }

            maxlen = max(maxlen,cur);
        }

        return maxlen;
        
    }
};