class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        unordered_map <int,vector<int>> pos;

        for(int i =0 ; i<nums.size(); i++){
            pos[nums[i]].push_back(i);
        }

        int ans = INT_MAX;

    for (auto &p : pos) {
        auto&v = p.second ;
        if(v.size()>=3){
            for(int i =0 ; i+2< v.size();i++){
                int a = v[i];
                int c = v[i+2];
                ans =  min(ans,2*(c-a));
            }
        }
    }
        return ans== INT_MAX ? -1 : ans;
    }
    
};