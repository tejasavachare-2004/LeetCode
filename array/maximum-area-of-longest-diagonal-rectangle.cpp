class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n = dimensions.size();

        int maxdigo = 0;
        int max_area = 0;

        for(int i = 0; i<n; i++){

            int l = dimensions[i][0];
            int w = dimensions[i][1];

            int area = l*w;
            int diago = l*l + w*w;

            if(diago>maxdigo){
                maxdigo = diago;
                max_area = area;
            }else if(diago == maxdigo){
                max_area =max(max_area, area);
            }
        }


        return max_area;
    }
};