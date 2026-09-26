class Solution {
public:
    void solve(vector<int>& candi , int  target , int indx ,vector<int>& curr , vector<vector<int>>& res){
        if(target <0){
            return;
        }
        if(target == 0){
            res.push_back(curr);
            return;
        }

        for(int i = indx ; i<candi.size() ;i++ ){
            if(i > indx && candi[i] == candi[i-1]){
                continue;
            }
            curr.push_back(candi[i]);
            solve(candi ,target -candi[i] ,i+1,curr, res);
            curr.pop_back();
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;

        sort(candidates.begin(),candidates.end());
        solve(candidates,target , 0,curr,res);

        return res;
    }
};