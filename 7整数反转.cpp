class Solution {
public:
    int reverse(int x) {
        int max = 0x7fffffff, min = 0x80000000;
        long ind = 0;
        for (; x; ind = ind * 10 + x % 10, x /= 10);
        return ind > max || ind < min ? 0 : ind;
    }
};
