class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        return findxor(nums,0, 0);
    }

    int findxor(vector<int>& nums, int index,int xorval){

        if(index ==nums.size()){  return xorval;}

        int pick = findxor(nums,index+1,xorval^nums[index]);
        int no_Pick = findxor(nums,index+1,xorval);

        return pick + no_Pick;
    }
};