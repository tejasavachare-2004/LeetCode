class Solution {
public:
    

int thirdMax(vector<int>& nums) {
    long long max,s_max,t_max;

    max =LONG_MIN;
    s_max = LONG_MIN;
    t_max =LONG_MIN;


    

    for (int i = 0; i < nums.size(); i++)
    {

        if (nums[i] == max || nums[i] == s_max || nums[i] == t_max) continue;

        if(max <nums[i]){
            t_max=s_max;
            s_max=max;
            max=nums[i];
        }else if(s_max< nums[i]){
          t_max=s_max;
          s_max =nums[i];  
        }else if(t_max<nums[i]){
            t_max=nums[i];
        }
    }

    
    return (t_max==LONG_MIN)? max : t_max;
}
};