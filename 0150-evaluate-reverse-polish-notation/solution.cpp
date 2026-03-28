class Solution {
public:
int solve(int val1,int val2,string ch){
    if(ch=="+") return val1+val2;
    else if(ch=="-") return val1-val2;
    else if(ch=="*") return val1*val2;
    else return val1/val2;
}
    int evalRPN(vector<string>& s) {
        stack<string> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=="+"||s[i]=="-"||s[i]=="*"||s[i]=="/"){
                string ch=(s[i]);
                int val2=stoi(st.top());
                st.pop();
                int val1=stoi(st.top());
                 st.pop();
                int x=solve(val1,val2,ch);
                st.push(to_string(x));
            }
            else st.push(s[i]);
        
        }
        return stoi(st.top());
    }
};
