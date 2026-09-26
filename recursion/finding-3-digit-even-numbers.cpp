class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set <int> nums ;
        int num;

        for(int i = 0; i<digits.size(); i++){

            for(int  j = 0 ; j <digits.size() ; j++){

                for(int  k = 0 ; k < digits.size() ; k++){

                    if(i == j || i==k|| j== k){
                        continue;
                    }
                    num = digits[i] * 100 + digits[j]*10 + digits[k]*1;

                    if(num>=100 && num%2== 0){
                    nums.insert(num);
                    }

                    
                    

                }
            }
        }

        vector<int > res(begin(nums),end(nums));


        return res;


    }
};