class Solution {
public:
    string frequencySort(string s) {
        vector<vector<char>> bucket(s.size()+1);
        unordered_map<char,int> m;
        for(auto c:s){
            m[c]++;
        }
        for(auto c: m){
            bucket[c.second].push_back(c.first);
        }
        string ans="";
        for(int i=bucket.size()-1;i>=1,ans.size()<s.size();i--){
            for(auto c:bucket[i]){
                ans.append(i, c);
            }
        }
        return ans;
    }
};
