class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();

        int arr[26] = {0};

        if(n != m) return false;


        for(char c : s){
            arr[c  -'a']++;
        }

        for(char c : t){
            arr[c  -'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (arr[i] != 0) return false;
        }
        return true;


    }
};