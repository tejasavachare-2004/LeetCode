class Solution {
public:
    int vowelConsonantScore(string s) {
        int v = 0 ;
        int con = 0 ;
        for (char c  : s){
            if(c >='a' && c <= 'z' ){
                if( c == 'a' || c == 'e' || c == 'i'|| c=='o'|| c=='u'){
                    v++;
                }else{
                    con++;
                }
            }
        }
        if(con == 0) return 0;
        return floor(v/con);
    }
};