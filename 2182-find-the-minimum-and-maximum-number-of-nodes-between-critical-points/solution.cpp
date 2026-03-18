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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        
        vector<int> idx;
        vector<int> ans;
        if(head==NULL||head->next==NULL||head->next->next==NULL){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        int i=0;
        ListNode* temp=head->next;
        ListNode* pre=head;
        ListNode* cur=pre->next;
        ListNode* nxt=cur->next;
        while(nxt){
            if((cur->val>nxt->val&&pre->val<cur->val)||(cur->val<nxt->val&&pre->val>cur->val)) idx.push_back(i);
            pre=cur;
            cur=nxt;
            nxt=nxt->next;
            i++;
        }
        if(idx.size()<2){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        int minn=INT_MAX;
        for(int i=0;i<idx.size()-1;i++){
            if((idx[i+1]-idx[i])<minn) minn=idx[i+1]-idx[i];
        }
        ans.push_back(minn);
        ans.push_back(idx[idx.size()-1]-idx[0]);
        return ans;
    }
};
