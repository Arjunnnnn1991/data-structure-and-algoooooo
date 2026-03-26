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
    ListNode* swapNodes(ListNode* head, int k) {
        int size=0;
        ListNode* temp=head;
        while(temp){
            size++;
            temp=temp->next;
        }
        ListNode* a;
        ListNode* b;
        temp=head;
        for(int i=1;i<=size;i++){
            if(i==k) a=temp;
            if(size-k+1==i)b= temp;
            temp=temp->next;
        }
        swap(a->val,b->val);
        return head;
       
        
    }
};
