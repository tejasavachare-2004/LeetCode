class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        int n = n1+n2;
        
        vector<int> ans(n+2);
        int i=0;
        int j=0;
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
            }else{
                ans.push_back(nums2[j]);
            }
        }

        while(i<n1){
            ans.push_back(nums1[i++]);
        }
        while(j<n2){
            ans.push_back(nums2[j++]);
        }

        if(n%2==0){
            return (double)(double)(ans[n/2])+(ans[(n/2)-1]);
        }else{
            return ans[n/2];
        }

    }
};