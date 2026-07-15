class MinStack {
stack<int> ss;
stack<int> mi;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        ss.push(value);
        //mini = min(mini, value);
        if(!mi.empty()){
            mi.push(min(value, mi.top()));
        }else{
            mi.push(value);
        }
    }
    
    void pop() {
        if(!ss.empty()){
            ss.pop();
            mi.pop();
        }
    }
    
    int top() {
        //if(ss.empty()) return;
        return ss.top();
        
    }
    
    int getMin() {
        
        return mi.top();
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