class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string,int> m;
        vector<int> ans;
        int wordlen=words[0].size();
        int numwords=words.size();
        int winsize=numwords*wordlen;
        int n=s.size();
        for(auto x: words){
            m[x]++;
        }
        for(int offset=0;offset< wordlen;offset++){
            int left=offset;
            int count=0;
            unordered_map<string,int> cur;
            for(int right=left;right+wordlen<=n;right+=wordlen){
                string k=s.substr(right,wordlen);
                cur[k]++;
                if(m.count(k)&&m[k]>=cur[k]) count++;
                while(right-left+wordlen>winsize){
                    string e=s.substr(left,wordlen);
                    
                    if(m.count(e)&&cur[e]<=m[e]) count--;
                    cur[e]--;
                    left+=wordlen;
                }
                  if(count==numwords) ans.push_back(left);
              
            }
            
        }
        return ans;
    }
};
