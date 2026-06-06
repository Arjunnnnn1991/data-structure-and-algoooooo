class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
            stack<char> st2;
        string s1="",s2="";
        for(auto x:s){
            if(x=='#'&&!st1.empty())
            st1.pop();
          if(x!='#')st1.push(x);
        }
        for(auto x:t){
            if(x=='#'&&!st2.empty())
            st2.pop();
           if(x!='#')st2.push(x);
        }
        while(st1.size()&&st2.size()){
            if(st1.top()!=st2.top())return false;
            st1.pop();
            st2.pop();
        }
        return (!st1.size()&&!st2.size()) ;
       
    }
};
