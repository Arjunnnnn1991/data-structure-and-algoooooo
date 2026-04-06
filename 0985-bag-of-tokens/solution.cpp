class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score=0;
        if(tokens.size()==1&&tokens[0]<=power) return 1;
        if(tokens.size()<=1) return score;
        int i=0,j=tokens.size()-1;
        sort(tokens.begin(),tokens.end());
        if(power<tokens[0]) return 0;
       
        while(i<=j){
            
            while(i<=j&&power>=tokens[i]){
                power-=tokens[i];
                i++;
                score++;
            }
            if(i==j&&power<tokens[i]) break;
            if(i<=j&&score>0){
                score--;
                power+=tokens[j--];
            }
        }
        return score;
    }
};
