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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return root;
        if(root->val==key){
            if(root->left==NULL&&root->right==NULL) return NULL;
            else if(root->left==NULL||root->right==NULL){
                if(root->left) return root->left;
                else return root->right;
            }
            else{
              
                TreeNode* pervt=root->left;
                TreeNode* r=root->right;
                  TreeNode* pre=pervt;
                if(pervt->right==NULL){
                    root=pervt;
                    root->right=r;
                    return root;
                }
                
                else{
                    root=pervt;
                    while(root->right){
                        root=root->right;
                        if(root->right)  pre=root;
                    }
                    if(root->left==NULL)pre->right=NULL;
                    else pre->right=root->left;
                    root->right=r;
                    root->left=pervt;
                    return root;
                }
            }
        }
        else if(root->val>key) root->left=deleteNode(root->left,key);
        else root->right=deleteNode(root->right,key);
        return root;
    }
};
