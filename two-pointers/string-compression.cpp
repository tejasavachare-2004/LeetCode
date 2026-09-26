class Solution {
public:
    int compress(vector<char>& chars) {
        int n =chars.size();

        int index =0;
        int i =0;

        while(i<n){
        char current_chr = chars[i];
        int count =0;

        while(i<n && current_chr == chars[i]){
            count++;
            i++;
        }

        chars[index]=current_chr;
        index++;

        if(count>1){
            string dg = to_string(count);

            for(char s : dg){
                chars[index]=s;
                index++;
            }
        }
        }
        return index;

    }
};


