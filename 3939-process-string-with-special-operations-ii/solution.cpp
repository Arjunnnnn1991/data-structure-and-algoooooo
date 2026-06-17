class Solution {
public:
    char processStr(string s, long long k) {
    const long long CAP = 2e18;
    int n=s.size();
    vector<long long> sz(n+1,0);
    for(int i=0;i<n;i++){
        if (s[i] == '*') sz[i+1] = max(0LL, sz[i]-1);
        else if (s[i] == '#') sz[i+1] = min(CAP, sz[i]*2);
        else if(s[i]=='%') sz[i+1]=sz[i];
        else {
            sz[i+1]=sz[i]+1;
            }
        }
    if(k>=sz[n])  return '.';
    for(int i=n-1;i>=0;i--){
        if(s[i]=='#'){
            if(k>=sz[i]) k-=sz[i];
        }
        else if(s[i]=='*'){

        }
        else if(s[i]=='%'){
            k=sz[i]-1-k;
        }
        else if(k==sz[i]) return s[i];
    }
    return '.';
    }
};
//    string ans="";
//         for(auto x:s){
//             if(x=='#')ans.append(ans);
//             else if(x=='*'){
//                 if(ans.size())ans.pop_back();
//                 else continue;
//             }
//             else if(x=='%') reverse(ans.begin(),ans.end());
//             else ans.push_back(x);
//         }
//         long long n=(long long)(ans.size()-1);
//       if(k>n) return '.';
//       else return ans[k];
