class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        int n = nums.size();

        if(k == 0 ){
            return n;
        }
        sort(nums.begin(), nums.end());

        int threshold = nums[n -k];

        int c = 0 ; 
        for(int num : nums){
            
        if(num<threshold){
            c++;
        }
            
        }
            
        
        return c;
    }
};