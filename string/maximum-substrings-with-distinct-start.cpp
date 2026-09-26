class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> used ;

        for(char ch : s){
            used.insert(ch);
        }

        return used.size();
    }
};