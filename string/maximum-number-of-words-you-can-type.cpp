class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        bool mp[26] = {false};
        for(char &ch: brokenLetters){
            mp[ch- 'a'] =true;
        }
        int res = 0;
        bool cantype = true;

        for(char&ch : text){
            if(ch == ' '){
                if(cantype){
                    res++;
                }
                cantype = true;
            }else if(mp[ch-'a']==true){
                cantype =false;
            }
        }

        if(cantype) res++;

        return res;
    }
};