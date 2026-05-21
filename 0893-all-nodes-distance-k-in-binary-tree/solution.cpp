/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        if(k==0) return {target->val};
        unordered_map<TreeNode*,TreeNode*>m;
        queue<TreeNode*>q;
        q.push(root);
        TreeNode* pre=NULL;
        while(q.size()){
            auto t=q.front();
            q.pop();
            if(t->left){
                m[t->left]=t;
                q.push(t->left);
            }
            if(t->right){
                m[t->right]=t;
                q.push(t->right);
            }

        }
        unordered_map<TreeNode*,int >dis;
        unordered_set<TreeNode*> viewd;
        dis[target]=0;
     
        q.push(target);
        vector<int> ans;
        while(q.size()){
            auto t=q.front();
            int d=dis[t];
            q.pop();
            if(t->left&&! viewd.count(t->left)){
                if(d==k-1){
                    ans.push_back(t->left->val);
                }
                else{
                    dis[t->left]=d+1;
                    q.push(t->left);
                }
                viewd.insert(t->left);
            }
            if(t->right&&! viewd.count(t->right)){
                if(d==k-1){
                    ans.push_back(t->right->val);
                }
                else{
                    dis[t->right]=d+1;
                    q.push(t->right);
                }
                 viewd.insert(t->right);
            }
            if(m.count(t)&&!viewd.count(t)){
                viewd.insert(t);
                if(d==k-1){
                    ans.push_back(m[t]->val);
                }
                else{dis[m[t]]=d+1;
                q.push(m[t]);
                }
            }
        }
        return ans;
    }
};
