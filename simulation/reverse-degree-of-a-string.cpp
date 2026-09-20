class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        int i =1;
        for(char c :s){
            int val ='z' - c + 1;
            sum+=val*i;
            i++;
        }

        return sum;
    }
};