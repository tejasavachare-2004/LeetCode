class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int s1 =0 ,s2 =0;
        bool active = true;

        for(int i =0 ;i<nums.size() ; i++){
            if(nums[i]%2 == 1 ){
                active = !active;
            }

            if((i+1)%6 == 0){
                active =!active;
            }

            if(active)s1 += nums[i];
            else s2+= nums[i];
        }
        return s1 - s2;
    }
};