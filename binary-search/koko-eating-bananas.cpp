class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int k) {
        int l = 1, h = *max_element(piles.begin(), piles.end());
        while (l < h) {
            int mid = l + (h - l) / 2, sum = 0;
            for (int p : piles) sum += (p + mid - 1) / mid;
            if (sum <= k) h = mid;
            else l = mid + 1;
        }
        return l;


    }
};