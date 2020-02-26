class Solution {
public:
    string longestPalindrome(string s) {
        int left = 0;
        int right = 0;
        int maxlen = 0;
        int startind = 0;
        int index = 0;
        while (s[index]) {
            right = index;
            left = index - 1;
            while (s[right] == s[index]) right++;
            index = right;
            while (left >= 0 && s[right] && s[left] == s[right]) {
                left--;
                right++;
            }
            if (right - left - 1 > maxlen) {
                startind = left + 1;
                maxlen = right - left - 1;
            }
        }
        char* str = (char*)malloc(maxlen + 1);
        str[maxlen] = '\0';
        for (int i = 0; i < maxlen; i++) {
            str[i] = s[startind + i];
        }
        return str;
    }
};
