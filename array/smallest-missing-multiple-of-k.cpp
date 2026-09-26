class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> s(nums.begin(), nums.end());
        int muilt = k;
        while(true){
            if(s.find(muilt) == s.end()){
                return muilt;
            }

            muilt +=k; 
        }

        return 0;
    }
};