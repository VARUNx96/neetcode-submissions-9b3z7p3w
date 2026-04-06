class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1, hi = *max_element(piles.begin(), piles.end());

        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;

            // canFinish logic inline
            long long hours = 0;
            for (int pile : piles)
                hours += (pile + mid - 1) / mid;

            if (hours <= h)
                hi = mid;
            else
                lo = mid + 1;
        }

        return lo;
    }
};