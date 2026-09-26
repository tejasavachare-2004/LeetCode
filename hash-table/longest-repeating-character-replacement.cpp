class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int r =0;
        int maxlen = 0;
        int maxfreq = 0;
        int n = s.length();
        vector<int> freq(26,0);

        while(r<n){
            freq[s[r] - 'A']++;
            maxfreq = max(maxfreq , freq[s[r] -'A']);
            int window_size = r-l+1;

            if((window_size - maxfreq) > k){
                freq[s[l] -'A']--;
                l++;
            }

            window_size = r-l +1;
            maxlen = max(maxlen , window_size); 
            r++;
        }

        return maxlen;
    }
};