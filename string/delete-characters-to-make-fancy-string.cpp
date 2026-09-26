class Solution {
public:
    string makeFancyString(string s) {
        int count =1;
        string res = "";
        for(int i =0 ;i<s.length();i++){
            if(s[i]==s[i+1]){
                count++;
            }else{
                count =1;
            }

            if(count<=2){
                res+=s[i];
            }else{
                continue;
            }
        }
        return res;
    }
};