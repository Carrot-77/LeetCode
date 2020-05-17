class Solution {
public:
    int guessNumber(int n) {
        int l = 1, r = n;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (guess(mid) == 0) return mid;
            if (guess(mid) < 0) r = mid - 1;
            else if (guess(mid) > 0) l = mid + 1;
        }
        return l;
    }
};
