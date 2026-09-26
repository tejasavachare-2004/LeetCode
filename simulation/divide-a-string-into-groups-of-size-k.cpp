class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        
        int n =s.length();

        vector <string> res;

        int i =0;


        while(i<n){

            int j = (i+k-1 >= n) ? (n-1) : (i+k-1);

            string temp = s.substr(i ,j-i+1);

            if(j-i+1 < k){
                int remain_len = k- (j-i+1);
                temp += string(remain_len , fill);
            }

            res.push_back(temp);
             
            i +=k;

        }

        return res;



    }
};