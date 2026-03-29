class Solution {
public:
void solver(string&s,int x){
    string c=s;
    for(int i=0;i<x-1;i++){
        s+=c;
    }
    return;
}
    string decodeString(string s) {
        stack<string> st;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]>=48&&s[i]<=57){
                string t="";
                while(i>=0&&s[i]>=48&&s[i]<=57){
                    t.push_back(s[i]);
                    i--;
                }
                i++;
                reverse(t.begin(),t.end());
                string sx="";
                while(st.size()!=0&&st.top()!="]"){
                    
                    if(st.top()=="[") {st.pop();
                    continue;}
                    
                    sx += st.top();

                    st.pop();

                }
                // reverse(sx.begin(),sx.end());
                solver(sx,stoi(t));
                st.pop();
                st.push(sx);
            }
            else{
                st.push(string(1, s[i]));
            }
        }
       string res = "";
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        // reverse(res.begin(), res.end());

        return res;
    }
};
