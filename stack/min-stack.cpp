class MinStack {
stack<pair<int, int>> ss;
//stack<int> ss;
public:
    /*MinStack() {
        
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
    }*/
    MinStack() {
        
    }
    
    void push(int value) {
        if(ss.empty()){
            ss.push({value, value});
        }else{
            ss.push({value, min(value, ss.top().second)});
        }
    }
    
    void pop() {
        if(!ss.empty()){
            ss.pop();
        }
    }
    
    int top() {
        //if(ss.empty()) return;
        return ss.top().first;
        
    }
    
    int getMin() {
        
        return ss.top().second;
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