class MinStack {
    private:
     stack<int>data;
        stack<int>min;
public:

    MinStack() {
       
    }
    
    void push(int value) {
        
        data.push(value);
        if(min.empty()||data.top()<=min.top()){
            min.push(value);
        }
       
     
    }
    
    void pop() {
        if(data.top()==min.top()){
                min.pop();
            }
            data.pop();
    }
    
    int top() {
       return data.top();
        
    }
    
    int getMin() {
return min.top();
        
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