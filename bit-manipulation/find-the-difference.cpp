class Solution {
public:
    char findTheDifference(string s, string t) {

        int sum_s =0;
        for (char &c : s ){
            sum_s+=c;
        }
        int sum_t =0;
        for(char &te : t){
            sum_t+=te;
        }


        return (char)(sum_t-sum_s);
    }
};