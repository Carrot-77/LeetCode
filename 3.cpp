class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ind[256] = {0};
        int l = 0, ans = 0;
        for (int i = 0; s[i]; i++) {
            l++;
            l = min(l, (i + 1) - ind[s[i]]);
            ind[s[i]] = i + 1;
            ans = max(ans, l);
        }
        return ans;
    }
};
