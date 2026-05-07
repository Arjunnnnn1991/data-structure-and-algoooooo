class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> need;
        unordered_map<char,int> haave;
        for(auto x:ransomNote){
            need[x]++;
        }
        for(auto x:magazine){
            haave[x]++;
        }
        for( auto x:need){
            if(!haave.count(x.first)||haave[x.first]<need[x.first]) return false;
        }
        return true;

    }
};
