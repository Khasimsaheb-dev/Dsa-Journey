
    class Solution {
public:
    long long totalhrs(vector<int>& piles, int hrs) {
        long long totalhr = 0;

        for (int i = 0; i < piles.size(); i++) {
            totalhr += (piles[i] + hrs - 1LL) / hrs;
        }

        return totalhr;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low <= high) {
            int mid = low + (high - low) / 2;

            long long time = totalhrs(piles, mid);

            if (time <= h)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }

};