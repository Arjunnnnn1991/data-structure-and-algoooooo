#include<stack>
class MyQueue {
public:
stack<int> st;
stack<int> helper;
    MyQueue() {
        st;
        helper;
    }
    
    void push(int x) {
        while(st.size()>0){
            helper.push(st.top());
            st.pop();
        }
        st.push(x);
        while(!helper.empty()){
            st.push(helper.top());
            helper.pop();
        }
    }
    
    int pop() {
        if(!st.empty()){int x=st.top();
        st.pop();
        return x;}
        else return -1;
    }
    
    int peek() {
        if(st.size()==0) return -1;
        else return st.top();
    }
    
    bool empty() {
        return st.size()==0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
