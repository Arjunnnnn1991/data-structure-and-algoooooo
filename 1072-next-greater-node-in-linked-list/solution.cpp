/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
ListNode* revmedaddy(ListNode* &head){
    if(head==NULL||head->next==NULL) return head;
    ListNode* pre=NULL;
    ListNode* cur=head ;
    ListNode* post=head->next;
    while(post){
        cur->next=pre;
        pre=cur;
        cur=post;
        post=post->next;
    }
    cur->next=pre;
    return cur;
}
    vector<int> nextLargerNodes(ListNode* head) {
        head=revmedaddy(head);
        stack<int> st;
        vector<int> ans;
        ans.push_back(0);
        st.push(head->val);
        head=head->next;
        while(head){
            while(st.size()!=0&&st.top()<=head->val) st.pop();
            if(st.size()!=0) ans.push_back(st.top());
            else ans.push_back(0);
            st.push(head->val);
            head=head->next;
        }
        for(int i=0;i<ans.size()/2;i++){
            swap(ans[i],ans[ans.size()-1-i]);
        }
        return ans;
    }
};
