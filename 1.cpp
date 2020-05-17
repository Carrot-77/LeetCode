class Solution {
public:
    unordered_map<int, int> h;
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        for (int i = 0; i < nums.size(); i++) {
            if (h.find(target - nums[i]) == h.end()) {
                h[nums[i]] = i;
                continue;
            }
            ret.push_back(h[target - nums[i]]);
            ret.push_back(i);
            break;
        }
        return ret;
    }
};
