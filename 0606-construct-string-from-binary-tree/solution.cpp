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
    // string stringmaker(TreeNode* root){
    //     if(root==NULL) return "";
    //     if(root->left==NULL&&root->right) {
    //     string m=stringmaker(root->right);
    //     return to_string(root->val)+"()" + "(" +m +")";
    //     }
    //     if(root->left==NULL&&root->right==NULL) return to_string(root->val);
    //     string k= stringmaker(root->left);
    //     string m=stringmaker(root->right);
    //     if(m=="") return to_string(root->val)+"("+k+")";
    //     else return to_string(root->val)+"("+k+")"+"("+m +")";
    // }
    void makeme(TreeNode* root,string &s){
        if(root==NULL) return ;
        s+=to_string(root->val);
        if(root->left==NULL&&!root->right) return ;
       if(root->left){
        s+="(";
        makeme(root->left,s);
        s+=")";
       }
       else s+="()";
       if(root->right){
        s+="(";
        makeme(root->right,s);
        s+=")";
       }
       return;
    }
    string tree2str(TreeNode* root) {
        // string s=stringmaker(root);
        // return s;
        string s="";
        makeme(root,s);
        return s;
    }
};
