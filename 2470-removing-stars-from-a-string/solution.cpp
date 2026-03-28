class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        int i=0;
        while(i<s.size()){
            if(s[i]=='*'){
                if(st.size()!=0)st.pop();
                i++;
            }
            else{
                st.push(s[i]);
                i++;
            }
        }
        s="";
        while(st.size()>0){
            s.push_back(st.top());
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
