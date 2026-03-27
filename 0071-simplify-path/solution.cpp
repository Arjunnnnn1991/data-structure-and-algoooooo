class Solution {
public:
    string simplifyPath(string path) {
        if(path.size()==1) return path;
        stack<char> st;
        st.push(path[0]);
        int i=1;
        while(i<path.size()){
            if(path[i]=='/'){
                if(st.top()!='/') st.push('/');
                i++;
            }
            else if(path[i]=='.'){
                int count=0;
                int k=i-1;
                for(i;i<path.size();i++){
                    if(path[i]=='.') count++;
                    else break;
                }
                if(count>2||path[k]!='/'||path[i]!='/'&&i<path.size()){
                    for(int j=0;j<count;j++){
                        st.push('.');
                    }
                }
                else if(count==2){
                    int x=0;
                    while(x<=1&&st.size()>1) {
                        
                        if(st.top()=='/')x++;
                        st.pop();
                    }
                }
            }
            else {
                st.push(path[i]);
                i++;
            }
        }
        if(st.size()!=1&&st.top()=='/') st.pop();
        string k="";
        while(st.size()>0){
            k=st.top()+k;
            st.pop();
        }
        return k;
    }
};
