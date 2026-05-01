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
TreeNode* first=NULL;
void getf(TreeNode* root, int start){
    if(root==NULL) return;
    if(root->val==start){
        first=root;
        return;

    }
    getf(root->left,start);
    getf(root->right,start);
    return;
}
void mark(TreeNode* root, unordered_map<TreeNode*,TreeNode*>&m){
    if(root==NULL) return;
    if(root->left) m[root->left]=root;
    if(root->right) m[root->right]=root;
    mark(root->left,m);
    mark(root->right,m);
    return;
}
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<TreeNode*,TreeNode*> m;
        getf(root,start);
        mark(root,m);
        queue<pair<TreeNode*,int>> q;
        q.push({first,0});
        int maxi=0;
        unordered_set<TreeNode*> s;
        s.insert(first);
        while(q.size()>0){
            auto t=q.front();
            q.pop();
            TreeNode* temp=t.first;
            int col=t.second;
            maxi=max(maxi,col);
            if(temp->left){
                if(s.find(temp->left)==s.end()){
                    q.push({temp->left,col+1});
                    s.insert(temp->left);
                    }
            }
            if(temp->right){
                if(s.find(temp->right)==s.end()){
                    q.push({temp->right,col+1});
                    s.insert(temp->right);
                    }
            }
            if(m.find(temp)!=m.end()){
                if(s.find(m[temp])==s.end()){
                    q.push({m[temp],col+1});
                    s.insert(m[temp]);
                    }
            }
        }
        return maxi;
    }
};
