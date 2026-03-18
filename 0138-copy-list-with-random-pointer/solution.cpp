/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return NULL;

        Node * dummy=new Node(100);
        Node* temp=head;
        Node* dtemp=dummy;

      
        while(temp){
            Node* tc= new Node(temp->val);
            dtemp->next=tc;
            temp=temp->next;
            dtemp=dtemp->next;
        }

       
        Node* a = head;
        Node* b = dummy->next;

        while(a && b){
            Node* nextA = a->next;
            Node* nextB = b->next;

            a->next = b;
            b->next = nextA;

            a = nextA;
            b = nextB;
        }

       
        Node* t = head;
        while(t){
            if(t->random){
                t->next->random = t->random->next;  
            }
            t = t->next->next;
        }

        
        Node*d1=new Node(1);   
        Node*d2=new Node(1);  
        Node* dd1=d1;
        Node* dd2=d2;

        Node* tt=head;         

        while(tt){
            dd1->next=tt;
            dd1=dd1->next;

            Node* copy = tt->next;
            dd2->next=copy;
            dd2=dd2->next;

            tt = copy->next;   
        }

        dd1->next=NULL;
        dd2->next=NULL;

        return d2->next;
    }
};
