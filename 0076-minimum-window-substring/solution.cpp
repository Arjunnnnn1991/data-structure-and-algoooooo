class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> idx(2,0);
        bool flag=false;
        int maxi=INT_MAX;
        int i=0,j=0;
        unordered_map<char,int> need;
        for(auto x: t){
            need[x]++;
        }
        int count=0;
        unordered_map<char,int> m;
        while(j<s.size()){
                if(need.count(s[j])){
                    m[s[j]]++;
                    if(m[s[j]]<=need[s[j]]) count++;
                }
            while(count==t.size()){
                flag=true;
                if(j-i<maxi){
                    maxi=j-i;
                    idx[0]=i;
                    idx[1]=j;
                }
                if(need.count(s[i])){
                    if(m[s[i]]==need[s[i]]) count--;
                    m[s[i]]--;
                }
                i++;
            }
            j++;
        }
        string ans="";
        if(flag)for(int i=idx[0];i<=idx[1];i++){
            ans.push_back(s[i]);
        }
        return ans;
    }
};
