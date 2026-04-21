class Solution {
public:
    long long solver(long long val1,long long val2,char ch){
        if(ch=='+') return val1+val2;
        else return val1-val2;
    }
  
  
    int calculate(string s1) {
        string s;
        for(int i=0;i<s1.size();i++){
            if(s1[i]==' ') continue;
            s.push_back(s1[i]);
        }
        stack<long long> val;
        stack<char> op;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ') continue;
            if(s[i]=='('){
                op.push('(');
                
            }
            else if(s[i]==')'){
                while(op.top()!='('){
                    long long val2=val.top();
                    val.pop();
                     long long val1=val.top();
                    val.pop();
                    char opp=op.top();
                    op.pop();
                    long long x=solver(val1,val2,opp);
                    val.push(x);
                }
                op.pop();
            }
              else if(s[i]=='-'||s[i]=='+'){
                if(s[i]=='-' && (i==0 || s[i-1]=='(')){
        val.push(0);
    }
                   
                
              
                    while(!op.empty()&&op.top()!='('){
                    long long val2=val.top();
                    val.pop();
                     long long val1=val.top();
                    val.pop();
                    char opp=op.top();
                    op.pop();
                    long long x=solver(val1,val2,opp);
                    val.push(x);
                    }
                    op.push(s[i]);
                
              }
               
            else{
                long long num=0;
                while(s[i]>='0'&&s[i]<='9'){
                    num=num*10+(long long)s[i]-'0';
                    i++;
                }
                i--;
                val.push(num);
            }
        }
         while(op.size()>0){
            
                    long long val2=val.top();
                    val.pop();
                     long long val1=val.top();
                    val.pop();
                    char opp=op.top();
                    op.pop();
                    long long x=solver(val1,val2,opp);
                    val.push(x);
                }
                return val.top();
    }
};
