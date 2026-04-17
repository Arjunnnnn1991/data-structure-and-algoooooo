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
    void doit(vector<int>& hold,TreeNode* root){
        if(root==NULL) return;
        
        doit(hold,root->left);
        hold.push_back(root->val);
        doit(hold,root->right);
        return;
    }
    TreeNode* makerx(vector<int>& hold,int lo,int hi){
        if(lo>hi) return NULL;
        int mid=lo+(hi-lo)/2;
        TreeNode* root=new TreeNode(hold[mid]);
        root->left=makerx(hold,lo,mid-1);
        root->right=makerx(hold,mid+1,hi);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> hold;
        doit(hold,root);
       return makerx(hold,0,hold.size()-1);
    }
};
