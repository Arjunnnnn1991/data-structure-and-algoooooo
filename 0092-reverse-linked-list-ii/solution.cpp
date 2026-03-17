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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
    if(left==right) return head;

    ListNode* prell = NULL;
    ListNode* pre = NULL;
    ListNode* cur = NULL;
    ListNode* Next = NULL;

    ListNode* temp = head;

    for(int i=1;i<left-1;i++){
        temp=temp->next;
    }

    if(left == 1) prell = NULL;
    else prell = temp;

    if(left == 1){
        cur = head;
    } else {
        cur = temp->next;
    }

    ListNode* tail = cur;

    // ✅ FIX: bounded reverse
    int k = right - left + 1;
    while(k--){
        Next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = Next;
    }

    tail->next = cur;

    if(prell != NULL){
        prell->next = pre;
        return head;
    }
    else{
        return pre;
    }
}
};
