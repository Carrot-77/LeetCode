class MyStack {
public:
    deque<int> q1;
    /** Initialize your data structure here. */
    MyStack() {

    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q1.push_back(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int ans = q1.back();
        q1.pop_back();
        return ans;
    }
    
    /** Get the top element. */
    int top() {
        int ans = q1.back();
        return ans;  
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.empty();
    }
};
