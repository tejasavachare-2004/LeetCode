class Solution {
public:
    bool isValid(string s) {
    stack<char> s1;

    for(char cur : s){
        if(cur =='(' || cur == '{' || cur == '['){
            s1.push(cur);
        }
        else {if (s1.empty()) {
        return false;
        }
        char ch = s1.top();
        s1.pop();
        if ((cur == ')' && ch == '(') ||
            (cur == ']' && ch == '[') ||
            (cur == '}' && ch == '{')){
                continue;
                }else
                    return false;
        }

    }
        return s1.empty();
    }
};