class Solution {
public:

    int binary_search(vector<char>& letters , char target){
        int l = 0;
        int n = letters.size();
        int r = n-1;
        int ans;

        while(l<=r){
            int mid = (l+r)/2;

            if(letters[mid]>target){
                r = mid-1;
                ans = mid;
            }else{
                l = mid +1;
            }
        }

        return ans;

    }



    char nextGreatestLetter(vector<char>& letters, char target) {
        int indx = binary_search(letters , target);

        if(indx ==  letters.size()){
            return letters[0];
        }

        return letters[indx];
    }
};