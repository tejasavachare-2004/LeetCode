class Solution {
public:
    bool checkDivisibility(int n) {
        int og =n;
        int product   = 1;
        int sum =0;


        while(n>0){
            int digit = n % 10;
            sum += digit;
            product *= digit;
            n /= 10;

        }

        int total = sum + product;
        if(og % total == 0){
            return true;
        }else{
            return false;
        }

        
    }
};