class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
        int n = tasks.size();

        vector<long long>prf(n+1 , 0);
        for(int i = 0 ; i<n ;i++){
            prf[i+1] = prf[i]+tasks[i];
        }

        long long total = prf[n];
        long long ok = 0;

        vector<int> sum;

        for(long long k : shifts){
            ok +=k;

            if(ok >=total){
                sum.push_back(0);
                ok = 0;
                continue;
            }
            int p = upper_bound(prf.begin(), prf.end(), ok) - prf.begin();
            int cur =p -1;
            sum.push_back(n -cur);
        }
        return sum;
        
    }
};