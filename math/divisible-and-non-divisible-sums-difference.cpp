class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum =0;
        int sum_2 =0;
        for(int i = 1; i<=n ;i++){
            if(i%m == 0){
                sum+=i;
                continue;
            }
            sum_2 +=i;
        }

        return sum_2 - sum;
    }
};