class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        string str1 = s;

        int indx = s.find_first_not_of('9');
        if(indx != string::npos){
            char r = s[indx];
            replace(begin(s),end(s),r,'9');
        }

char r2 = str1[0];
replace(begin(str1),end(str1),r2,'0');   

return stoi(s) - stoi(str1);
}
};