class Solution {
public:
    long long maximumValue(int n, int s, int m) {
    long long res = s;

        if(n >=2){
            long long k = n/2;
            res = max(res , 1LL *s +k * 1LL * m- max(0LL , k-1));
        }

        if(n>= 3 ){
            long long  k = (n-1 )/2;
            res = max(res , 1LL *s +k* 1LL * (m -1));
        }
        return res;
    }
};