class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        vector<int> ans(deck.size(),0);
        queue<int> q;
        sort(deck.begin(),deck.end());
        
        for(int i=0;i<deck.size();i++){
            q.push(i);
        }
        for(int i=0;i<deck.size();i++){
            int idx=q.front();
            q.pop();
            q.push(q.front());
            q.pop();
            ans[idx]=deck[i];
        }
        return ans;
    }
};
