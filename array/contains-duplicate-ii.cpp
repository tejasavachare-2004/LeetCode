class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
     int n = nums.size();
    unordered_set<int> s1;
    int i = 0;
    int j = 0;
     while(j<n){

        if(abs(j-i)>k){
            s1.erase(nums[i]);
            i++;
        }

        if(s1.find(nums[j]) != s1.end()){
            return true;
        }


        s1.insert(nums[j]);
        j++;

     }
     return false;
    }
};