class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int result = 0;
        int n =  bank.size();
        int previous_devices = 0;

        for(int i = 0 ; i<n ; i++){
            int current_devices =0;
            for(char &ch:bank[i]){
                if(ch == '1'){
                    current_devices++;
                }
            }
            result +=(previous_devices*current_devices);

            if(current_devices != 0){
                previous_devices = current_devices;
            } 
        }


        return result;
    }
};