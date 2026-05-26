class Solution {
public:
    bool detectCapitalUse(string word) {
        char c=word[0];
        if(c>='a'&&c<='z'){
            for(auto x:word)
            {
                if(x<='Z'&&x>='A') return false;
            }
            return true;
        }
        else{
            int count=0;
            for(auto x:word){
                 if(x<='Z'&&x>='A') count++;;
            }
            return (count==1||count==word.size());
        }
        return true;
    }
};
