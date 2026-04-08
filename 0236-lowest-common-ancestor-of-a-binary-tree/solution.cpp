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
    int fmao(TreeNode* root, TreeNode* p, TreeNode* q,int &c){
        if(root==NULL) return 0;
        if(root==p) c++;
        if(root==q)c++;
        fmao(root->right,p,q,c);
        fmao(root->left,p,q,c);
        return c;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p==root||q==root) return root;
        int t=0;
        int w=0;
        int c=fmao(root->right,p,q,t);
        int k=fmao(root->left,p,q,w);
        if(c==1||k==1) return root;
        else if(k==2){
            return lowestCommonAncestor(root->left,p,q);
        }
        else return lowestCommonAncestor(root->right,p,q);
       

    }
};
