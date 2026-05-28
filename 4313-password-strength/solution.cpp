class Solution {
public:
    int passwordStrength(string password) {
        unordered_set<char> s1;
        unordered_set<char> s2;
        unordered_set<char> s3;
        unordered_set<char> s4;
        for(auto x:password){
            if(x>='a'&&x<='z') s1.insert(x);
            else if(x>='A'&&x<='Z') s2.insert(x);
            else if(x>='0'&&x<='9')s3.insert(x);
            else s4.insert(x);
        }
        return s1.size()+s2.size()*2+s3.size()*3+s4.size()*5;
    }
};
