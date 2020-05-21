class Solution {
public:
    int getNext(string &str, int i, int &val) {
        val = 0;
        while (str[i] && str[i] <= '9' && str[i] >= '0') {
            val = val * 10 + str[i] - '0';
            i++;
        }
        if (str[i]) ++i;
        return i;
    }
    int compareVersion(string version1, string version2) {
        int i = 0, j = 0, val1, val2;
        while (version1[i] || version2[j]) {
            i = getNext(version1, i, val1);
            j = getNext(version2, j, val2);
            if (val1 - val2) return val1 > val2 ? 1 : -1;
        }
        return 0;
    }
};
