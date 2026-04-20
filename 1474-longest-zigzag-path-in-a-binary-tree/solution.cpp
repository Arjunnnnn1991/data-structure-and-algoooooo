/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // void lhs(TreeNode* root,int & ans){
    //     if(root==NULL ) return ;
    //     ans++;
    //     rhs(root->right,ans);
    //     return;
    // }
    // void rhs(TreeNode* root,int & ans){
    //     if(root==NULL ) return ;
    //     ans++;
    //     lhs(root->left,ans);
    //     return; 
    // }
    // void ansmaker(TreeNode* root,int & ans){
    //     if(root==NULL) return ;
    //    int y=0;
    //    int x=0;
    //    lhs(root,x);
    //    rhs(root,y);
    //    x=max(x,y);
    //    ans=max(ans,x);
    //    ansmaker(root->left,ans);
    //    ansmaker(root->right,ans);
    //    return;
    
    // }
    void dodfs (TreeNode* root,int dir,int len,int & ans){
        if(root==NULL) return;
        ans=max(ans,len);
        if(dir==0){
            dodfs(root->right,1,len+1,ans );
            dodfs(root->left,0,1,ans);
        }
        else{
            dodfs(root->left,0,len+1,ans);
            dodfs(root->right,1,1,ans);
        }
        return;
    }
    int longestZigZag(TreeNode* root) {
        int ans=0;
        dodfs(root->left,0,1,ans);
        dodfs(root->right,1,1,ans);
        return ans;
    }
};
