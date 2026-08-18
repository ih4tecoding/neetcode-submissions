class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = 0;

        // Maximum speed needed is the largest pile
        for (int pile : piles) {
            right = max(right, pile);
        }

        // Binary search for the minimum valid speed
        while (left < right) {
            int mid = left + (right - left) / 2;

            if (canFinish(piles, h, mid)) {
                right = mid;       // mid works, try smaller
            } else {
                left = mid + 1;    // mid too slow, need bigger
            }
        }

        return left;
    }

private:
    bool canFinish(const vector<int>& piles, int h, int speed) {
        long long totalHours = 0;

        for (int pile : piles) {
            // Ceiling division: ceil(pile / speed)
            totalHours += (pile + speed - 1) / speed;
        }

        return totalHours <= h;
    }
};