class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int maxlen = 0;

        
        for(int i = 0 ; i<n ; i++){
         unordered_set <int> even_s, odd_s;

            for(int j = i ; j<n ;j++){
                if(nums[j]%2 == 0 ){
                    even_s.insert(nums[j]);
                }else{
                    odd_s.insert(nums[j]);
                }

                if(odd_s.size() == even_s.size()){
                    maxlen= max(maxlen,j - i + 1);
                }
            }
        }

        return maxlen;
    }
};