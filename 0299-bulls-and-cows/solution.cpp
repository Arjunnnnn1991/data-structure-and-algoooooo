class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int> m;
        unordered_map<char,int> p;
        int count=0;
        for(int i=0;i<guess.size();i++){
            if(guess[i]==secret[i]) count++;
            else{
                m[guess[i]]++;
                p[secret[i]]++;
            }
        }
        int tullu=0;
        for(auto x:m){
            if(p.find(x.first)!=p.end()) tullu+=min(x.second,p[x.first]);
        }
        string ans="";
        ans.append(to_string(count));
        ans+="A";
        ans.append(to_string(tullu));
        ans+="B";
        return ans;

    }
};
