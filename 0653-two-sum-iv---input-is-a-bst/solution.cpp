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
    void pushl(stack<TreeNode*> &low,TreeNode* root){
        if(root==NULL) return;
        while(root){
            low.push(root);
            root=root->left;
        }
        return;

    }
    void pushr(stack<TreeNode*> &hi,TreeNode* root){
        if(root==NULL) return;
        while(root){
            hi.push(root);
            root=root->right;
        }
        return;
    }
    bool findTarget(TreeNode* root, int k) {
       
        stack<TreeNode*> low;
        stack<TreeNode*> high;
        pushl(low,root);
        pushr(high,root);
        while(!high.empty()&&!low.empty()&&high.top()!=low.top()){
            int val=high.top()->val+low.top()->val;
            if(val==k){
               return true;
            }
            else if(val<k){
                TreeNode* temp=low.top();
                low.pop();
                pushl(low,temp->right);
            }
            else{
                TreeNode* temp=high.top();
                high.pop();
                pushr(high,temp->left);
            }

        }
        return false;

    }
};
