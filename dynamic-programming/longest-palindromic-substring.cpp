class Solution {
public:
    string longestPalindrome(string s) {
        string res = "";
        int resLen = 0;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            // odd length palindrome
            int l = i, r = i;
            while (l >= 0 && r < n && s[l] == s[r]) {
                if ((r - l + 1) > resLen) {
                    res = s.substr(l, r - l + 1);
                    resLen = r - l + 1;
                }
                l--;
                r++;
            }

            // even length palindrome
            l = i, r = i + 1;
            while (l >= 0 && r < n && s[l] == s[r]) {
                if ((r - l + 1) > resLen) {
                    res = s.substr(l, r - l + 1);
                    resLen = r - l + 1;
                }
                l--;
                r++;
            }
        }

        return res;

    }
};