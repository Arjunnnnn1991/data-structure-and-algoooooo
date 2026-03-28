class Solution {
public:
 int pri(char c1){
    if(c1=='-'||c1=='+') return 1;
    else return 2;
 }
 int solver(int x,int y,char c){
    if(c=='+') return x+y;
    else if(c=='-') return x-y;
    else if(c=='*') return x*y;
    else return x/y;
 }
    int calculate(string s) {
        stack<int> st;
        stack<char> op;
        int i=0;
        while(i<s.size()){
            if(s[i]==' ') {i++;
            continue;}
            if(s[i]>=48&&s[i]<=57){
                string k="";
                while(i<s.size()&&s[i]>=48&&s[i]<=57){
                    k.push_back(s[i]);
                    i++;
                }
                // reverse(k.begin(),k.end());
                st.push(stoi(k));
            }
            else{
                char ch=s[i];
                if(op.size()==0||pri(op.top())<pri(ch)) op.push(ch);
                else {
                    while(!op.empty()&&pri(op.top())>=pri(ch)){
                        char c=op.top();
                        op.pop();
                        int val2=st.top();
                        st.pop();
                        int val1=st.top();
                        st.pop();
                        int x=solver(val1,val2,c);
                        st.push(x);
                    }
                    op.push(ch);
                    
                }
                i++;
            }
        }
        while(op.size()>0){
            char c=op.top();
                        op.pop();
                        int val2=st.top();
                        st.pop();
                        int val1=st.top();
                        st.pop();
                        int x=solver(val1,val2,c);
                        st.push(x);
        }
        return st.top();
    }
};
