class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        int i=0;
        while(i<num.size()){
            while(!st.empty()&&k&&st.top()>num[i]){
               st.pop();
               k--;
            }
           
                
                st.push(num[i]);
                i++;
               
            
        }
        while(k&&st.size()){
            st.pop();
            k--;
        }
             string ans="";
        while(st.size()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        int j=0;
        while(ans[j]=='0') j++;
        ans=ans.substr(j);
        if(ans.size()==0) return "0";
        else return ans;
   
      
     
    }
};
