class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int n =encodedText.size();
        if(n == 0 ){
            return "";
        }
        int coln = n/rows;

        string res = "";

        for(int start_col = 0 ;start_col<coln;start_col++){
            int i = 0;
            int j=start_col;
            while(i<rows && j< coln){
                res += encodedText[i*coln+j];
                i++;
                j++;
            }
        }

        while(!res.empty() && res.back() == ' '){
            res.pop_back();
        }

        return res;

    }
};