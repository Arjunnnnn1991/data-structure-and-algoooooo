class Solution {
public:
    int depth(TreeNode* root){
        if(root==NULL) return 0;
        int k=depth(root->right);
        int j=depth(root->left);
        return 1+max(k,j);
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int w=depth(root->right);
        int k=depth(root->left);
        if(abs(w-k)>1) return false;
        else {
            return isBalanced(root->left)&& isBalanced(root->right);
           
        }
        return true;
       

    }
};
