class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n =  nums.size();
        vector<vector<int>> pos(n+1);
        int ans  = INT_MAX;

        for(int i =0 ; i<n ;i++){
            pos[nums[i]].push_back(i);
        }

        for(int v  =1 ; v <= n ;v++){
            auto &indx = pos[v];
            if(indx.size() >= 3 ){
                for(int i = 0 ; i+2 < indx.size(); i++){
                    int a = indx[i];
                    int c = indx[i+2];
                    ans =  min(ans, 2*(c -a));
                }
            }
        }

        return ans == INT_MAX ? -1 :ans;
    }
};