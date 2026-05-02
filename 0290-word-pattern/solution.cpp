class Solution {
public:
    bool wordPattern(string s, string pattern) {
        vector<string> arr;
        
        for(int i=0;i<pattern.size();i++){
            string l="";
            while(i<pattern.size()&&pattern[i]!=' '){
                l.push_back(pattern[i]);
                i++;
            }
            arr.push_back(l);
            
        }
        if(s.size()!=arr.size()) return false;
        unordered_map<char,string> m;
        unordered_set<string> se;
         for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
        for(int i=0;i<s.size();i++){
            if(m.find(s[i])==m.end()){
                if(se.find(arr[i])!=se.end()) return false;
                m[s[i]]=arr[i];
                se.insert(arr[i]);
            }
            else{
                if(m[s[i]]==arr[i]) continue;
                else return false;
            }
        }
       
        return true; 
    }
};
