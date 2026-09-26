class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest = 0;
        int sec_lar =0;


        for( int &num : nums){
            if(num>largest){
                sec_lar =  largest ;
                largest = num;
            }else{
                sec_lar = max (num,sec_lar);
            }
        }


        return (largest-1)*(sec_lar-1);
    }
};