class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        const long long MOD = 1000000007; 
        
        long long res = k ;
        long long  op = 0 ;
        long long a = 0 ;

        for(int z : nums){
            if(res <z ){
                long long  tp = (z - res + k -1)/k ;

                __int128 sum = (__int128)(2*op+ 1 +tp)* tp /2;
                a = (a +(long long)(sum % MOD)) % MOD;                    
                
                op +=tp;
                res +=tp *1LL *k;
            }

            res -=z;
        }

        return a ;
    }
};