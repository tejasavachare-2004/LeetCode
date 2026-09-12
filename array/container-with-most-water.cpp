class Solution {
public:
    int maxArea(vector<int>& height) {
        int i ;
        int j ; 
        i =0;
        j= height.size()-1;
        int max_area = INT_MIN;

        while(i!=j){
            int h = min(height[i],height[j]);
            int w = j-i;

            int area = h*w;

            if(height[i] >=height[j]){
                j--;
            }else{
                i++;
            }
            max_area = max(max_area,area);
        }

        return max_area;
    }
};