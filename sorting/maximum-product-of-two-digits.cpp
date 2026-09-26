class Solution {
public:
    int maxProduct(int n) {
        string str = to_string(n);

        int maxproduct = 0;


        for(int i = 0 ; i< str.length(); i++){

        for(int j = i+1 ; j < str.length(); j++){

            int d1 = str[i] - '0';
            int  d2 = str[j] - '0';

            maxproduct = max(maxproduct , d1*d2);
            
        }
            
        }
        return maxproduct;
    }
};