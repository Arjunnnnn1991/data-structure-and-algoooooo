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
    ListNode* merger(ListNode* A, ListNode* B){
        ListNode* c= new ListNode(100);
        ListNode* temp=c;
        while(A&&B){
            if(A->val<=B->val){
                temp->next=A;
                A=A->next;
                temp=temp->next;
            }
            else{
                temp->next=B;
                B=B->next;
                temp=temp->next;
            }
            if(A!=NULL){
                temp->next=A;
            }
            if(B!=NULL){
                temp->next=B;
            }
          
        }
          return c->next;
    }
    
    ListNode* sortList(ListNode* head) {
          if(head==NULL || head->next==NULL) return head;
        // ListNode* first=A;
        // ListNode* sec=A;
        ListNode* slow=head;
        ListNode* fast=head;
        // left middle lena hai;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* a=head;
        ListNode* b=slow->next;
        slow->next=NULL;
        a=sortList(a);
        b=sortList(b);
        ListNode* c=merger(a,b);
    return c;
    }
};
