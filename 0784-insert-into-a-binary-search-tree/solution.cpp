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
    //  void dotask(TreeNode* root,int val){
        
    //     if(root->val>val&&root->left==NULL) {
    //         root->left=new TreeNode(val);
    //         return;
    //     }
    //     else if(root->val<val&&root->right==NULL){
    //         root->right=new TreeNode(val);
    //         return;
    //     }
    //     else if(root->val>val&&val>root->left->val){
    //         TreeNode* temp=root->left;
    //         root->left=new TreeNode(root->val);
    //         root->left->left=temp;
    //         return;

    //     }
    //      else if(root->val<val&&val<root->right->val){
    //         TreeNode* temp=root->right;
    //         root->right=new TreeNode(root->val);
    //         root->right->right=temp;
    //         return;

    //     }
    //     else if(root->val>val) {
    //         dotask(root->left,val);
    //     }
    //     else{
    //         dotask(root->right,val);
    //     }
    //     return;
     
    TreeNode* insertIntoBST(TreeNode* root, int val) {
       if(root==NULL) return new TreeNode(val);
       if(root->val>val){
        if(root->left==NULL){
            root->left=new TreeNode(val);
        }
        else insertIntoBST(root->left,val);
       }
       else{
        if(root->right==NULL) {
            root->right=new TreeNode(val);
        }
        else insertIntoBST(root->right,val); 
       }
       return root;
    }
};
