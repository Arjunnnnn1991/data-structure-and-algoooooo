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
    TreeNode* builder(vector<int>& in,int inlo,int inhi, vector<int>& po,int poslo,int poshi)    {
        if(inlo>inhi||poslo>poshi) return NULL;
        TreeNode* t= new TreeNode(po[poshi]);
        int counter=0;
        for(int i=inlo;i<=inhi;i++){
            if(in[i]==po[poshi]) break;
            counter++;
        }
        int L=counter-1;
        int R=counter;
       t->left=builder(in,inlo,L+inlo,po,poslo,poslo+L);
       t->right=builder(in,inlo+1+R,inhi,po,poslo+R,poshi-1);
       return t;
        
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size()-1;
        return builder(inorder,0,n,postorder,0,n);
    }
};
