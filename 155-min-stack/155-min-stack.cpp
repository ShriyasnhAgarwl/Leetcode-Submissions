class MinStack {
public:
    stack<int> values;
    stack<int> minval;
    MinStack() {
        while(!values.empty())
        {
            values.pop();
            minval.pop();
        }
    }
    
    void push(int val) {
        values.push(val);
        if(minval.empty())
        {
            minval.push(val);
            return;
        }
        minval.push(min(minval.top(),val));
    }
    
    void pop() {
        if(!values.empty())
        {
            values.pop();
            minval.pop();
        }
    }
    
    int top() {
        if(!values.empty())
        {
            return values.top();
        }
        return -1;
    }
    
    int getMin() {
        
        if(!minval.empty())
        {
            return minval.top();
        }
        return -1;
        
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