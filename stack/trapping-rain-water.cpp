class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();

        //find left_ max;
        vector<int> left(n);
        int maxleft=0;
        for(int i =0 ; i<n ;i++){
            maxleft = max(maxleft , height[i]);
            left[i] =maxleft;
        }

        //find_ right_boy

        vector<int> right(n);
        int maxright =0;
        for(int i = n -1 ;i>=0;i--){
            maxright =max(maxright,height[i]);
            right[i] = maxright;
        }

        //calculate boy

        int total = 0;

        for(int i = 0; i<n ;i++){
            total +=min(left[i],right[i])-height[i];
        }

        //return that shit 
        return total;
        //lets gooo nigggaa

    }
};