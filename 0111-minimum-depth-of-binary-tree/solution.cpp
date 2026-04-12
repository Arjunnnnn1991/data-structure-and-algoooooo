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
    // int helper(TreeNode* root){
       
    //     if(root&&root->right==NULL&&root->left==NULL) return 1;
    //     if(!root) return INT_MAX;
    //     int x=helper(root->left);
    //     int y=helper(root->right);
    //     y=min(x,y);
       
    //     return 1+y;
    // }
      //    if(root==NULL) return 0; insde main
    //    int k= helper(root);
    //     return k;
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        queue<TreeNode*>q;
        q.push(root);
        bool flag=true;
        if(!root->left&&!root->right) return 1;
        int ans=1;
        while(flag){
            int x=q.size();
            for(int i=0;i<x;i++){
                TreeNode* temp=q.front();
                if(temp->left==NULL&&temp->right==NULL){
                    flag=false;
                    break;
                }
                q.pop();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
               

            }
            if(flag)ans++;
        }
        return ans;

  
    }
};
