class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        queue<int> q1;

        for(int i= 1 ; i<=8 ;i++){
            q1.push(i);
        }

        vector <int> res;

        while(!q1.empty()){
            int temp = q1.front();
            q1.pop();

            if(temp >=low && temp <=high){
                res.push_back(temp);
            }

            int last_digit = temp%10;
            
            if(last_digit+1 <=9){
                q1.push(temp*10 + (last_digit+1) );
            }
        }

        return res;
    }
};