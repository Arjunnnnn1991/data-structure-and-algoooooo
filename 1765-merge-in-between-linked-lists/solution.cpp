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
    ListNode* mergeInBetween(ListNode* head, int a, int b, ListNode* h2) {
        ListNode * prea=new ListNode(1);
        ListNode* preb=new ListNode(1);
        // ListNode * temp=head;
        // if(a!=b)
        // {for(int j=1;j<=b;j++){
            
        //     temp=temp->next;    
        //     if(j==a-1) prea=temp;
        // }
        // preb=temp->next;}
        // else{
        //     for(int i=1;i<a;i++){
        //         temp=temp->next;
        //     }
        //     prea=temp;
        //     if(temp->next)preb=temp->next->next;
        // }
        // ListNode* t=h2;
        // while(t&&t->next){
        //     t=t->next;
        // }
        // prea->next=h2;
        // if(a!=b)t->next=preb;
        // else{
        //     t->next=preb;
        // }
        
        
        // return head;
        ListNode* temp=head;
        for(int i=0;i<=b;i++){
            if(i==a-1) prea=temp;
            temp=temp->next;
        }
        preb=temp;
        ListNode* t=h2;
        while(t&&t->next){
            t=t->next;
        }
        prea->next=h2;
        t->next=preb;
        return head;
        
        

    }
};
