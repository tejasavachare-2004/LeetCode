class Solution {
public:
    string minWindow(string s, string t) {
        int n = t.length();
        int m = s.length();

        if(n>m){
            return "";
        }
        map<char,int> mp;

        for(char ch:t){
            mp[ch]++;
        }
        int req_count =n;
        int i=0;
        int j=0;
        int minStart = 0;
        int WindowStart = INT_MAX;

        while(j<m){

            if(mp[s[j]] > 0){
                req_count--;
            }
            mp[s[j]]--;

            while(req_count == 0){

                int currWindow = j-i +1;
                
                if(WindowStart> currWindow){
                    WindowStart =currWindow;
                    minStart = i;
                }

                mp[s[i]]++;

                if(mp[s[i]]>0){
                    req_count++;    
                    
                }


                i++;
            }


            j++;
        }

        return WindowStart == INT_MAX ? "" : s.substr(minStart , WindowStart);


    }
};