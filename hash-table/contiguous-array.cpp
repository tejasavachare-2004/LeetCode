class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int ,int > p{{0,-1}};
        int sum =0;
        int maxlen = 0 ;

        for(int i = 0 ;i<nums.size() ; i++){
            if(nums[i]== 1){
                sum+= 1;
            }else{
                sum+= -1;
            }

            if(p.count(sum)){
                int p_index = p[sum];
                maxlen = max(maxlen,i-p_index);
            }else{
                p[sum]=i;
            }
        }

        return maxlen;
    }
};