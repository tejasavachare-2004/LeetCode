class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int totl =0;
        for(int i = num1 ; i<= num2 ; i++){
            int pel = i;
            string s = to_string(pel);
            if(s.size()<3) continue;

            int count = 0;
            for(int j =1 ; j<s.size() - 1; j++){
                int prev = s[j-1] -'0';
                int curr = s[j]-'0';
                int next = s[j+1]- '0';

                if((curr> prev && curr > next ) || (curr < prev && curr <next))
                    count++;
            }
            totl +=count;
        }

        return totl;
    }
};