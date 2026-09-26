class Solution {
public:
    typedef pair <char,int> p;
    string frequencySort(string s) {
        
        vector<p> vec(123);

        for(char &ch : s ){
            int freq = vec[ch].second;
            vec[ch] = {ch, freq+1};
        }

        auto lamba =[&] (p &P1, p &P2){
            return P1.second > P2.second;
        };

        sort(begin(vec),end(vec),lamba);
        string res = "";

        for(int i =0 ; i<=122 ; i++){
            if(vec[i].second>0){
                char ch = vec[i].first;
                int freq = vec[i].second;
                string temp =  string(freq,ch);
                res += temp;
            }

        }

        return res;
    }
};