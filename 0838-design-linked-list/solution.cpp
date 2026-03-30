class Node{
    public:
    int val;
    Node* next;
    
    Node(int val): val(val),next(NULL){}
};
class MyLinkedList {
public:
Node* head;
int size;

    MyLinkedList() {
        head=NULL;
        size=0;
    }
    
    int get(int index) {
        if(head==NULL||size<=index) return -1;
        else {
             Node* temp=head;
            for(int i=0;i<index;i++) temp=temp->next;
            return temp->val;
        }
    }
    
    void addAtHead(int val) {
        if(head==NULL) head=new Node(val);
        else{
            Node* c=new Node(val);
            c->next=head;
            head=c;
        }
        size++;
    }
    
    void addAtTail(int val) {
        Node* temp=head;
        if(head==NULL) {
            addAtHead(val);
            return;
        }
        while(temp->next){
            temp=temp->next;
        }
        Node* c=new Node(val);
        temp->next=c;
        size++;
        return;
    }
    
    void addAtIndex(int index, int val) {
         Node* temp=head;
         if(index==0) return addAtHead(val);
         else if(index>size) return;
         else if(index==size) return addAtTail(val);
         else{
            for(int i=1;i<index;i++) temp=temp->next;
            Node* t=temp->next;
            temp->next=new Node(val);
            temp=temp->next;
            temp->next=t;
            size++;
            return;
         }
    }
    
    void deleteAtIndex(int index) {
        if (head==NULL) return;
        else if(index==0){
            head=head->next;
            size--;
            return;
        }
        else if(index>=size) return;
        else{
             Node* temp=head;
            for(int i=1;i<index;i++) temp=temp->next;
            temp->next=temp->next->next;
            size--;
            return;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
