class Solution {
public:
    int minimumFlips(int n) {



        
        string s = bitset<32>(n).to_string();
        s.erase(0, s.find_first_not_of('0'));
        string r = s;
        reverse(r.begin(), r.end());

        int flips = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != r[i]) flips++;
        }
        return flips;

    }
};