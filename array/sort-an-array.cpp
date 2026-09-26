class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int maxi  = *max_element(nums.begin() , nums.end());
        int min  = *min_element(nums.begin() , nums.end());

        unordered_map <int,int> mp ;

        for(int &num :nums){
            mp[num]++;
        }
        int i =0;
        for(int num =min ; num<=maxi ;num++){

            while(mp[num]>0){
                nums[i]=num;
                i++;
                mp[num]--;
            }
        }
        return nums;
        
    }
};