class Solution {
public:
    int possibleStringCount(string word) {
        int n= word.length();
        
        int i =0;
        int res =0;
        while(i<n){
            int j =i;
            while(j<n && word[i]==word[j]){
                j++;
            }
            int len = j - i;
            if (len >= 2) {
                res += (len - 1);
            }

         i=j;
        }

        return res+1;
            
            
            
    }

};