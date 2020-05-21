class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() - t.size()) return false;
        int code[256] = {0};
        for (int i = 0; s[i]; i++) code[s[i]] += 1;
        for (int i = 0; t[i]; i++) {
            if (code[t[i]] == 0) return false;
            code[t[i]] -= 1;
        }
        return true;
    }
};
