class Solution {
public:
    void getsubset(vector<int> &nums ,vector <int> &ans , int i , vector<vector<int>> &subset){
        if(i == nums.size() ){
             subset.push_back(ans);
             return;
        }

        ans.push_back(nums[i]);
        getsubset(nums,ans,i+1,subset);
        ans.pop_back();

        int indx = i+1;
        while(indx<nums.size() && nums[indx] == nums[indx-1]){
            indx++;
        }

        getsubset(nums,ans,indx,subset);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int i = 0 ;
        sort(nums.begin() ,nums.end() );
        vector<int> ans;
        vector<vector<int>> subset;

        getsubset(nums ,ans , i , subset);

        return subset;
    }
};