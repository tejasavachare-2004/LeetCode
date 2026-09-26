class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int small = INT_MAX;
        int sec_small = INT_MAX;

        for(int &num :prices){
            if(num<small){
                sec_small = small;
                small = num;
            }else{
                sec_small = min(sec_small,num);
            }
        }

        if(small+sec_small>money){
            return money;
        }

        return money-(small+sec_small);
    }
};