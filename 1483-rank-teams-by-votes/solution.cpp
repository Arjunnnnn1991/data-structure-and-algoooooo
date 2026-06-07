bool cmp(pair<vector<int>,char>a,pair<vector<int>,char>b){
    for(int i=1;i<=26;i++){
        if(a.first[i]>b.first[i]) return true;
        if(a.first[i]<b.first[i]) return false;
    }
    if(a.second>b.second) return false;
    return true;
}
class Solution {
public:
    string rankTeams(vector<string>& votes) {
        unordered_map<char,vector<int>>m;
        for(auto x:votes){
            for(int i=0;i<x.size();i++){

                char t=x[i];
                if(!m.count(t)){
                    m[t]=vector<int>(27,0);
                }
                m[t][i+1]++;
            }

        }
        vector<pair<vector<int>,char>>maker;

        for(auto x:m){
           
            maker.push_back({x.second,x.first});
        }
        sort(maker.begin(),maker.end(),cmp);
        string ans="";
       for(auto x:maker){
        ans.push_back(x.second);
       }
    //    reverse(ans.begin(),ans.end());

        return ans;
    }
};
