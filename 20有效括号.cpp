class Solution {
public:
    bool isValid(string s) {
        stack<char> sta;
        int i = 0;
        while (s[i]) {
            if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
                sta.push(s[i]);
            } else if (s[i] == '}') {
                if (sta.empty() || sta.top() != '{') return false;
                sta.pop();
            } else if (s[i] == ']') {
                if (sta.empty() || sta.top() != '[') return false;
                sta.pop();
            } else if (s[i] == ')') {
                if (sta.empty() || sta.top() != '(') return false;
                sta.pop();
            }
            i++;
        }
        if (sta.empty()) return true;
        return false;
        
    }
};
