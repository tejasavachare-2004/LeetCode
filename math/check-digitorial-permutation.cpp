class Solution {
public:
    int digit(int x, vector<int>& fact) {
        int sum = 0;
        while (x > 0) {
            sum += fact[x % 10];   
            x /= 10;               
        }
        return sum;
    }

    bool isDigitorialPermutation(int n) {
        int p = n ;

        vector<int> fact(10,1);
        for(int i =1 ;i <= 9 ; i++){
            fact[i] =fact[i-1]*i;
        }
        int s  =digit( n , fact);
        int sum =0 ;
        int temp = n ;
        while(temp >0){
            sum += fact[temp%10];
            temp/= 10;
        }
        string a = to_string(p);
        string b = to_string(sum);

        sort(a.begin() , a.end());
        sort(b.begin() , b.end());
        
        if( a != b){
            return false;
        }

        return digit(s , fact ) == s;
    }
};