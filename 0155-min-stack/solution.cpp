class MinStack {
public:
stack<long long> st;
long long mn;
    MinStack() {
       mn=INT_MAX; 
    }
    
    void push(long long val) {
        if(st.size()==0){
            mn=val;
            st.push(val);
        }
        else if(val>=mn) st.push(val);
        else{
            st.push(2*val-mn);
            mn=val;
        }
    }
    
    void pop() {
        if(st.top()>=mn){
            st.pop();
        }
        else{
            int x=mn;
            mn=2*mn-st.top();
            st.pop();
        }
    }
    
    long long top() {
        if(st.top()<mn) return mn;
        else return st.top();
    }
    
    long long getMin() {
        return mn;
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
