class MinStack {
public:

        stack<int> orig;
        stack<int> min;
    
    void push(int val) {
        if(min.empty() || min.top()>=val)
            min.push(val);
        orig.push(val);
    }
    
    void pop() {
        if(orig.empty()) {
            return;
        }
        if(min.top()==orig.top()){
            min.pop();
        }
        orig.pop();
    }
    
    int top() {
        return orig.top();
    }
    
    int getMin() {
        return min.top();
    }
    
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */