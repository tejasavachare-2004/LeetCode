class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // Step 1: sort the array
        sort(strs.begin(), strs.end());

        // Step 2: take first and last string
        string first = strs.front();
        string last = strs.back();

        // Step 3: compare character by character
        string prefix = "";
        for (int i = 0; i < min(first.size(), last.size()); i++) {
            if (first[i] == last[i]) {
                prefix.push_back(first[i]);
            } else {
                break;
            }
        }
        return prefix;

    }
};