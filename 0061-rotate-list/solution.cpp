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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0) return head;
        ListNode* temp= head;
        if(head==NULL||head->next==NULL) return head;
        int size=1;
        while(temp->next!=NULL){
            size++;
            temp=temp->next;
        }
         k%=size; 
        if(k==size||k==0) return head;
        ListNode* temp2= head;
        for(int i=1;i<size-k;i++){
            temp2=temp2->next;
        }
        ListNode* newhead=temp2->next;
        temp->next=head;
        temp2->next=NULL;
        return newhead;

    }
};
