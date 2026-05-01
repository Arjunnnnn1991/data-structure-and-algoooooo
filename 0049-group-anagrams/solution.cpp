class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& arr) {
        vector<vector<string>> ans;
        unordered_map<string,vector<int> > m;
        for(int i=0;i<arr.size();i++){
            string w=arr[i];
            sort(w.begin(),w.end());
            if(m.find(w)!=m.end()){
                m[w].push_back(i);
            }
            else{
                vector<int>t;
                t.push_back(i);
                m[w]=t;
            }
        }
        for(auto x:m){
            vector<string>t;
            for(int i=0;i<x.second.size();i++){
                t.push_back(arr[x.second[i]]);
            }
            ans.push_back(t);
        }
        return ans;
    }
};
