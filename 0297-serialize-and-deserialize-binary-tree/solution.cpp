/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==NULL) return "N,";
        string s;
        queue<TreeNode*>q;
        q.push(root);
        while(q.size()){
            TreeNode* t=q.front();
            q.pop();
           if(t){
            s+=to_string(t->val)+',';
             q.push(t->left);
             q.push(t->right);
           }
           else s+="N,";
            
        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data=="N,") return NULL;
        queue<TreeNode*> q;
        stringstream ss(data);
        string val;
        getline(ss,val,',');
        TreeNode* root= new TreeNode(stoi(val));
        q.push(root);
        while(q.size()){
            TreeNode* t=q.front();
            q.pop();
            if(getline(ss,val,',')){
                if(val!="N"){
                    t->left=new TreeNode(stoi(val));
                    q.push(t->left);
                }
            }
            if(getline(ss,val,',')){
                if(val!="N"){
                    t->right=new TreeNode(stoi(val));
                    q.push(t->right);
                }
            }
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
