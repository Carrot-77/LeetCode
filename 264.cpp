class Solution {
public:
    set<long long> s;
    int nthUglyNumber(int n) {
        s.clear();
        s.insert(1);
        for (int i = 1; i < n; i++) {
            long long val = *s.begin();
            s.erase(s.begin());
            s.insert(val * 2);
            s.insert(val * 3);
            s.insert(val * 5);
        }
        return *s.begin();
    }
};
