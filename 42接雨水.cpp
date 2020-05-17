class Solution {
public:
    int trap(vector<int>& height) {
        int len = height.size();
        vector<int> left(len), right(len);
        for (int i = 1; i < len; i++) {
            left[i] = max(left[i - 1], height[i - 1]);
        }
        for (int i = len - 2; i >= 0; i--) {
            right[i] = max(right[i + 1], height[i + 1]);
        }
        int ans = 0;
        for (int i = 1; i < len - 1; i++) {
            int level = min(left[i], right[i]);
            ans += max(0, level - height[i]);
        }
        return ans;
    }
};
