class Solution {
public:
    bool isDigit(char c) {
        return c >= '0' && c <= '9';
    }

    int myAtoi(string s) {
        int i = 0;
        long long num = 0;  // use long long to handle overflow safely
        int sign = 1;       // default positive, -1 for negative

        // 1. Ignore leading whitespace
        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        // 2. Check signedness
        if (i < s.length()) {
            if (s[i] == '-') {
                sign = -1;
                i++;
            } else if (s[i] == '+') {
                i++;
            }
        }

        // 3. Conversion
        while (i < s.length() && isDigit(s[i])) {
            int digit = s[i] - '0';

            // 4. Handle overflow
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > (sign == 1 ? 7 : 8))) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            num = num * 10 + digit;
            i++;
        }

        return sign * num;
    }
};
