class Solution {
public:
    int maxCapacity(vector<int>& costs, vector<int>& capacity, int budget) {
        int n = costs.size();

        vector<pair<int , int>> lumax;
        for(int  i = 0 ;i<n ;i++){
            lumax.push_back({costs[i] , capacity[i]});
        }

        sort(lumax.begin() , lumax.end());

        vector<int> premax(n);
        premax[0] = lumax[0].second;
        for(int i = 1 ; i<n ;i++){
            premax[i] = max(premax[i-1],lumax[i].second);
        }

        int ans  =0 ;

        for(int  i = 0 ; i<n ; i++){
            if(lumax[i].first <budget){
                ans = max(ans, lumax[i].second);
            }
        }

        for(int  i = 1 ;  i<n ;i++){
            int rem = budget - lumax[i].first -1;
            if(rem <0) continue;

            int l =0 , r = i-1 ,best = -1;
            while(l<=r){
                int m = (l+r)/2;
                if(lumax[m].first <= rem){
                    best = m ;
                    l = m+1;
                }else{
                    r =m-1;
                }
            }

            if(best !=-1){                ans = max(ans , lumax[i].second + premax[best]);
                         }
        }

        return ans;











        
        
    }
};