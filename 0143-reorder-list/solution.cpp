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
    ListNode* rev(ListNode* head){
        ListNode* pre=NULL;
        ListNode* cur=head;
        ListNode* Next=cur->next;
        while(Next){
            cur->next=pre;
            pre=cur;
            cur=Next;
            Next=Next->next;
        }
        cur->next=pre;
        return cur;
    }
    void reorderList(ListNode* head) {
        if(head==NULL||head->next==NULL||head->next->next==NULL) return ;
        ListNode* slow=head;
        ListNode* temp=head->next;
        ListNode* fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        bool flag=false;
        if(fast) flag=true;
        int s=1;
        ListNode* c=rev(slow);
        if(flag==false){while(c){
            if(s%2==1){
                head->next=c;
                c=c->next;
                head=head->next;
                
            }
            else{
                head->next=temp;
                temp=temp->next;
                head=head->next;

            }
            s++;
            
        }}
        else{while(c->next){
            if(s%2==1){
                head->next=c;
                c=c->next;
                head=head->next;
                
            }
            else{
                head->next=temp;
                temp=temp->next;
                head=head->next;

            }
            s++;
            
        }

        }
        if(flag){
            // temp=temp->next;
            head->next=temp;
            head=head->next;
        }
        head->next=NULL;
        return;

    }
};
