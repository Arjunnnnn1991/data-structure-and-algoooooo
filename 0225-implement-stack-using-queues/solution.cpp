class MyStack {
public:
queue<int> st;
    MyStack() {
        st;
    }
    
    void push(int x) {
        st.push(x);
        for(int i=0;i<st.size()-1;i++){
            st.push(st.front());
            st.pop();
        }
        return;
    }
    
    int pop() {
        if(st.size()==0) return -1;
        int x=st.front();
       st.pop() ;
       return x;
    }
    
    int top() {
         if(st.size()==0) return -1;
        int x=st.front();
      
       return x;
    }
    
    bool empty() {
        return st.size()==0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
