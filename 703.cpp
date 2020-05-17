class KthLargest {
public:
    typedef pair<int, int> PII;
    set<PII> s;
    int k, t;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        this->t = 0;
        for (int i = 0; i < nums.size(); i++) {
            add(nums[i]);
        }
        return;
    }
    
    int add(int val) {
        if (s.size() < k) {
            s.insert(PII(val, t++));
        } else if (val > s.begin()->first){
            s.erase(s.begin());
            s.insert(PII(val, t++));
        }
        return s.begin()->first;
    }
};
