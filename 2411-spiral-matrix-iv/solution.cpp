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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> mat(m,vector<int>(n));
        int x=m*n;
        int size=1;
        ListNode* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            size++;
        }
        
        for(int i=0;i<m*n-size;i++){
         ListNode* tempZ= new ListNode(-1);
        //  tempZ->val=-1;
         temp->next=tempZ;
         temp=temp->next;
        }
        int trow=0,lrow=m-1,lcol=0,rcol=n-1;
        //trow<=lrow&&lcol<=rcol
        ListNode* newf=head;
        while(newf!=NULL){
            for(int i=lcol;i<=rcol;i++){
                mat[trow][i]=newf->val;
                newf=newf->next;
            }
            trow++;
            for(int i=trow;i<=lrow;i++){
                mat[i][rcol]=newf->val;
                newf=newf->next;
            }
            rcol--;
            if(trow>lrow||lcol>rcol) break;
            for(int i=rcol;i>=lcol;i--){
                mat[lrow][i]=newf->val;
                newf=newf->next;
            }
            lrow--;
            for(int i=lrow;i>=trow;i--){
                mat[i][lcol]=newf->val;
                newf=newf->next;
            }
            lcol++;
        }
        return mat;
        
    }
};
