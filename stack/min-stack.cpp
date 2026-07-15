class MinStack {
stack<int> ss;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        ss.push(value);
    }
    
    void pop() {
        if(!ss.empty()){
            ss.pop();
        }
    }
    
    int top() {
        //if(ss.empty()) return;
        return ss.top();
        
    }
    
    int getMin() {
        int mini = INT_MAX;
        stack<int> dupl = ss;
        while(!dupl.empty()){
            mini = min(dupl.top(), mini);
            dupl.pop();
        }
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */