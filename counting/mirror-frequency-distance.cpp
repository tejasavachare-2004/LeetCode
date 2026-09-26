class Solution {
public:
    int mirrorFrequency(string s) {
        vector<int> freq(26,0);
        vector<int> digit(10, 0);

        for(char c : s){
           if(islower(c)){ freq[c-'a']++;
           }else{
            digit[c - '0']++;
           }
        }
        int ans = 0;
        for(int i = 0 ; i<26/2 ; i++){
            ans+=abs(freq[i] - freq[25 -i]);
        }

        for(int i = 0 ;i<10/2 ; i++){
            ans+= abs(digit[i] - digit[9-i]);
        }

        return ans;
    }
};