class Solution {
public:
    bool isPalindrome(string &s) {
        removespaces(s);
        removespeccial(s);

        for (char &c : s) {
            c = tolower(c);
        }

        int left = 0, right = s.length() - 1;
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    void removespaces(string &s) {
        int index = 0;
        for (char c : s) {
            if (c != ' ') {
                s[index++] = c;
            }
        }
        s.resize(index);
    }

    void removespeccial(string &s) {
        int index = 0;
        for (char c : s) {
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
                s[index++] = c;
            }
        }
        s.resize(index);
    }
};
