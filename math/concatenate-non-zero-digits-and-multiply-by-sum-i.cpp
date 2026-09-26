class Solution {
public:
    long long sumAndMultiply(int n) {
        long  sum = 0;
        long concat = 0;
        long rev = 0 ;

        while(n>0){
            rev = rev*10 +(n%10);
            n= n/10;
        }

        while(rev>0){
            int digit = rev%10;
            rev = rev/10;

            sum = sum + digit;

            if(digit !=0){
                concat = (concat*10) + digit;
            } 
        }

        return concat*sum;
        }
};