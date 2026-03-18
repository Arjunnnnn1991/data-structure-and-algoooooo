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
    ListNode * rev(ListNode* head){
        if(head==NULL||head->next==NULL) return head;
        ListNode* pree=NULL;
        ListNode* curr=head;
        ListNode* nxtt=curr->next;
        while(nxtt){
            
            curr->next=pree;
            pree=curr;
            curr=nxtt;
            nxtt=nxtt->next;

        }
        curr->next=pree;
        return curr;
    }
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* pre=NULL;
        ListNode* tail=NULL;
        ListNode* cur=head;
        ListNode* post=NULL;
        int size=1;
        while(cur){
            int k=0;
            ListNode* temp=cur;
            while(k<size&&temp){
                k++;
                temp=temp->next;
            }

            if(k%2==0){
                tail=cur;
                     for(int i=1;i<k;i++){
                         if(cur->next!=NULL)cur=cur->next;
                         }
                 post=cur->next;
                cur->next=NULL;
                ListNode * c=rev(tail);
                // pre->next=c;
                if(pre == NULL){         
                    head = c;
                } else {
                    pre->next = c;
                }

                tail->next=post;
                
                pre=tail;
                cur=post;
                
            }
            else{
                
                for(int i=0;i<k;i++){
                    pre=cur;
                    cur=cur->next;
                }
            
                
            }
            size++;
            
        }
        return head;
        
    }
};
