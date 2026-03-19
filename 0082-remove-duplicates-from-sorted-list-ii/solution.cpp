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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        if(head->next->next==NULL&&head->val==head->next->val) return NULL;
        ListNode*c=new ListNode(-11110);
        c->next=head;
        
       
        head=c;
        ListNode* pre=head;
        ListNode* post=head->next->next;
        ListNode* cur=head->next;
        while(post){
            if(cur->val==post->val){
                
                int k=post->val;
                while(post&&post->val==k){
                    post=post->next;
                }
                pre->next=post;
                cur=post;
                if(post)post=post->next;
                
            }
            else
            {pre->next=cur;
            pre=pre->next;
            cur=post;
            if(post)post=post->next;}
           

        }
        return head->next;
    }
};
