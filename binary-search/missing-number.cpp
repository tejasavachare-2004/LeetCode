class Solution {
public:


    void selection_sort(vector<int>& vec, int n) {
        for (int i = 0; i < n - 1; i++) {
            int mini = i;
            for (int j = i + 1; j < n; j++) {
                if (vec[j] < vec[mini]) {
                    mini = j;
                }
            }
            int temp = vec[mini];
            vec[mini] = vec[i];
            vec[i] = temp;
        }
    }


    int missingNumber(vector<int>& nums) {

        selection_sort(nums, nums.size());
        
        if (nums[0] != 0){
            return 0;
            }



        int count = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (count + 1 == nums[i] ) {
                   count = nums[i] ;
            }else{
                return count+1;
            }
        };
                return nums[nums.size() - 1] + 1;

}
};
