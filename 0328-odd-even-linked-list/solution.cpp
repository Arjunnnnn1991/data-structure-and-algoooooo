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
    ListNode* oddEvenList(ListNode* head) {
        // if(head==NULL||head->next==NULL) return head;
        
        
        
        
        // ListNode* c=new ListNode(1);
        // c->next=head;
        // bool flag=false;
        
        // head=c;
        // ListNode* slow=NULL;
        // ListNode* fast=head;
        // while(fast&&fast->next){
        //     if(fast->next->val%2==0&&!flag){
        //         slow=fast;
        //         flag=true;
        //     }
        //     else if(fast->next->val%2!=0&&flag){
        //         ListNode* temp=fast->next;
        //         fast->next=fast->next->next;
        //         ListNode* tempeve=slow->next;
        //         slow->next=temp;
        //         temp->next=tempeve;
        //         slow=slow->next;
        //         continue;
                
        //     }
        //     fast=fast->next;
        // }
        // return head->next;
        if(head==NULL||head->next==NULL) return head;
        ListNode* c1=new ListNode(0);
        ListNode* c=c1;
        int i=1;
        ListNode*temp =head;
        
        while(temp&&temp->next){
            
                ListNode* tempe=temp->next;
                temp->next=temp->next->next;
                c->next=tempe;
                c->next->next=NULL;
                c=c->next;
            
            
            if(temp&&temp->next)temp=temp->next;
        }
        if(temp&&temp->next!=NULL){
            c->next=temp->next;
            
            // temp->next=NULL;
        }
    temp->next=c1->next;
    return head;

        
    }
};
