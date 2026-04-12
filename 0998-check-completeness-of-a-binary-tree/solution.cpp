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
     int counter(TreeNode* root, int &ans){
        if(root==NULL) return 0;
        int x=counter(root->left,ans);
        int y=counter(root->right,ans);
        y=max(x,y);
        ans=max(ans,y);
        return y+1;
     }
    bool isCompleteTree(TreeNode* root) {
        int n=0;
        n=counter(root,n);
        queue<TreeNode*> q;
        q.push(root);
        int cur=1;
        while(cur<n){
           
        int x=q.size();
        if(cur<n-1){
            for(int i=0;i<x;i++){
            TreeNode* temp=q.front();
           if(temp->left == NULL||temp->right == NULL) return false;
            q.push(temp->left);
            q.push(temp->right);
            q.pop();
        }}
        else{
           int x=q.size();
           for(int i=0;i<x;i++){
             TreeNode* temp=q.front();
              q.pop();
             if(temp->left==NULL&&temp->right) return false;
            else if(temp->right==NULL) {
                for(int j=i;j<x&&q.size()>0;j++){
                    TreeNode* fmao=q.front();
                    if(fmao->left||fmao->right) return false;
                    q.pop();
                }
                return true;
            }
           
           }
        }

        cur++;
        }
        return true;
    // int n=0;
    // n=counter(root,n);
    //  queue<TreeNode*> q;
    //  q.push(root);
    //  int cur=1;
    //  while(cur<=n){
       
    //     TreeNode* temp=q.front();
    //     q.pop();
    //     int x=q.size();
    //     if((temp->left==NULL||!temp->right)){
    //         if(temp->left==NULL&&temp->right) return false;
    //         if(n!=cur) return false;
    //         for(int i=0;i<x;i++){
    //             TreeNode* t=q.front();
    //             if(t->left||t->right) return false;
    //             q.pop();
    //             q.push(t->left);
    //             q.push(t->right);
    //         }

    //     }
    //    if(temp->left) q.push(temp->left);
    //     if(temp->right)q.push(temp->right);
    //     cur++;
    //  }
    //  return true;
  
    }
};
  //  while(true;){
    //     TreeNode* temp=q.front();
    //     q.pop();
    //     if(temp->left==NULL||temp->right==NULL){
    //         if(temp->right) return false;
    //         if(n!=cur) return false;
    //         int x=q.size();
    //         for(int i=0;i<x;i++){
    //             TreeNode* v=q.front();
    //             if(v->left||v->right) return false;
    //             q.push(v);
    //             q.pop();
    //         }
           
           
            
    //     }
        
       
    //  }
