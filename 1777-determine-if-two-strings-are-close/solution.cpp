class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()) return false;
        unordered_map<char, int>m;
        unordered_map<char, int>w;
        unordered_map<int, int>mark1;
        unordered_map<int, int>mark2;
        
       for(auto x: word1){
        w[x]++;
       }
       for(auto x: word2){
        m[x]++;
       }
       for(auto x: w){
        int t=x.second;
        mark1[t]++;
       }
       for(auto x: m){
        int t=x.second;
        if(w.find(x.first)==w.end()) return false;
        mark2[t]++;
       }
       for(auto x: mark1){
        if(mark2.find(x.first)==mark2.end()) return false;
        else if(x.second!=mark2[x.first]) return false;
        else{
            mark2.erase(x.first);
        }
       }
       if(mark2.size()!=0) return false;
       

     

        return true;
    }
};
