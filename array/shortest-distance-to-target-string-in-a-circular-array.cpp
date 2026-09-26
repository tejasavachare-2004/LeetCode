class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();int res = INT_MAX;
        for(int i = 0 ;i< n ;i++ ){
            if(words[i] == target){
                int startdist = abs(i-startIndex);
                int secdist = abs(n-startdist );
                res = min({secdist,startdist,res});
            }
        }

        return res == INT_MAX ?-1:res;
    }
};