class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        vector<string> ans;
        unordered_map<string,int> m;
        for(auto x:names){
            if(!m.count(x)){
                m[x]=1;
                ans.push_back(x);
            }
            else{
                int k=m[x];
                while(m.count(x+'('+to_string(k)+')'))k++;
                string j=x+'('+to_string(k)+')';
                m[j]=1;
                m[x] = k + 1;
                ans.push_back(j);
            }
        }
       return ans;
    }
};
// if(m.count(x)){
//                 int val=m[x];
//                 m[x]++;
//                 string h='('+val+')';
//                 string y=x+h;
//                 ans.push_back(y);
//                 m[y]=1;
//             }
//             else{
//                 if(x[x.size()-1]!=')'){
//                     ans.push_back(x);
//                     m[x]=1;
//                 }
//             }
// if(x[x.size()-1]!=')'){
//                 if(m.count(x)){
//                 int val=m[x];
//                  m[x]++;
//                  string h='('+val+')';
//                  string y=x+h;
//                  ans.push_back(y);
//                 }
//                 else{
//                     m[x]=1;
//                     ans.push_back(x);
//                 }
//             }
//             else{
//                 if(!m.count(x)){
//                     m[x]++;
//                     ans.push_back(x);
//                 }
//                 else{
                    
//                 }
//             }
