class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int sec_larg  =INT_MIN;
        int larg = INT_MIN;

        int sec_small =INT_MAX;
        int small =INT_MAX;


        for(int &num : nums){
            if(num> larg){
                sec_larg =larg;
                larg = num;
            }else{
                sec_larg = max(sec_larg , num);
            }


            if(num< small){
                sec_small =small;
                small = num;
            }else{
                sec_small = min(sec_small , num);
            }
        }


        return (larg*sec_larg)-(small*sec_small);
    }
};