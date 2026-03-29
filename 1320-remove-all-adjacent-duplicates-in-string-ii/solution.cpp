class Solution {
public:
// bool checker(string&s,int k){
//     int i=0;
//     bool flag=false;
//     while(i<s.size()){
//         int count=0;
//         for(int j=i;j<i+k&&j<s.size();j++) {
//             if(s[i]==s[j]) count++;
            
//         }
//         if(count==k) {
//             flag=true;
//             return flag;
//         }
//         i++;
//     }
//     return flag;
// }
    string removeDuplicates(string s, int k) {
//         bool flag=checker(s,k);
//         stack<char> st;
//         int i=0;
//         while(flag){
//             i=0;
//             while( i<s.size()){
//                 int count=0;
//                 for(int j=i;j<i+k&&j<s.size();j++){
//                     if(s[i]==s[j]) count++;
//                     else break;
//                 }
//                 if(count==k) i=i+k;
//                 else{
//                     st.push(s[i]);

//                     i++;
//                 }
                
//             }
//             s="";
//                 while(st.size()>0){
//                     s.push_back(st.top());
//                     st.pop();
//                 }
//             reverse(s.begin(),s.end());
//             flag=checker(s,k);
            
//         }
stack<int> count;
stack<char> ch;
for(int i=0;i<s.size();i++){
    if(!ch.empty()&&ch.top()==s[i]){
       
        count.top()++;

    }
    else{
        count.push(1);
        ch.push(s[i]);
    }
    if(count.top()==k){
        ch.pop();
        count.pop();
    }
}
s="";
while(ch.size()>0){
    for(int i=0;i<count.top();i++)
   { s.push_back(ch.top());}
   count.pop();
    ch.pop();
}
reverse(s.begin(),s.end());
        return s;
    }
};
