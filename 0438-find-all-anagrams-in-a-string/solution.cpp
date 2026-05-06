class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> need;
        unordered_map<char,int> cur;
        int count=0;
        for(auto x: p){
            need[x]++;
        }
        queue<char>q;
        vector<int> ans;
        for(int i=0;i<s.size();i++){
            char x=s[i];
            q.push(x);
            cur[x]++;
            if(need.count(x)&&cur[x]<=need[x]){
                count++;
            }
            if(q.size()>p.size()){
                if(need.count(q.front())&&cur[q.front()]<=need[q.front()]) count--;
                cur[q.front()]--;
                q.pop();

            }
            if(count==p.size()) ans.push_back(i-p.size()+1);
            
        }
        return ans;
    }
};
