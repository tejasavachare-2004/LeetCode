class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> Count(101);

        int maxfq = 0;

        for(int  &num : nums){
            Count[num]++;
            maxfq = max(maxfq,Count[num]);
        }
        int res =0;

        return count(begin(Count) , end(Count) ,maxfq )* maxfq;
    }
};