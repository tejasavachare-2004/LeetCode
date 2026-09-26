class Solution {
public:
    int maximum69Number (int num) {
        int placeval = 0;
        int placesix =-1;

        int temp = num;


        while(temp>0){

            int rem = temp%10;

            if(rem == 6){
                placesix = placeval;
            }
            temp = temp/10;
            placeval++;

        }

        if(placesix == -1){
            return num;
        }

        return num + 3*pow(10,placesix);
    }
};