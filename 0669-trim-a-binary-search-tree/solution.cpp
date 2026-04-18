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
    void work(TreeNode* &root,int lo,int hi){
        if(root==NULL) return;
        while(root&&(root->val>hi||root->val<lo))
       { while(root&&root->val>hi){
            root=root->left;
        }
        if(!root) return;
        while(root&&root->val<lo){
            root=root->right;
        }}
        
        if(!root )return;
        while(root->left){
            if(root->left->val<lo){
                root->left=root->left->right;
            }
            else if(root->left->val>hi){
                root->left=root->left->left;
            }
            else break;
        }
        while(root->right){
            if(root->right->val>hi){
                root->right=root->right->left;
            }
            else if(root->right->val<lo){
                root->right=root->right->right;
            }
            else break;
        }
        work(root->left,lo,hi);
        work(root->right,lo,hi);
        return;
    }
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        work(root,low,high);
        return root;
    }
};
