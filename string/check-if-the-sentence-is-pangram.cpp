class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector <int> arr(26,0);
        int count =0;


        for(char &c : sentence  ){
            if(arr[c - 'a']==0){
                arr[c - 'a']++;
                
                count++;
            }
        }


        if(count>25){
            return true;
        }else{
            return false;
        }
    }
};