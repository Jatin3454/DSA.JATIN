#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //CONTRUCTOR
    Node(int d){
        this->data = d;
        this->prev =  NULL;
        this->next = NULL;
    }
    //destructor
    ~Node(){
        int val = this->data;
        if(next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memmory free for nodee with data"<<val<<endl;
    }
};
// 
 void print(Node* head){
    Node* temp = head;

    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
 }
 //gives the length
 int  getLength(Node* head){
    int len=0;
    Node* temp = head;

    while(temp!= NULL){
       len++;
        temp = temp->next;
    }
    return len;
 }
 void insertathead(Node* &head,int d){
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
    }
   else{
    Node* temp = new Node(d);
    temp->next = head;
        head->prev=temp;
        head=temp;
   }
 }
 void deletenode(int position,Node* &head,Node* &tail){
    // if(position<-1 || position> )

    if(position==1){// If deleting the head

        Node* temp = head;
        temp->next->prev=NULL;
        head = temp->next;// Update head to the next node
        // memory free start node
        temp -> next =NULL;// Disconnect the node from the list
        delete temp;// Free the memory of the deleted node
    }
    else{
        //deleing any mdddle
        Node* curr = head;
        Node* prev = NULL;

        int count =1;
         // Traverse to the node to be deleted
        while(count<=position){
            prev = curr;
        curr  = curr -> next;
            count++;
        }
        if(curr==NULL){// If position is out of bounds
            cout<<"Position out of bounds"<<endl;
            return;
        }
         
        prev -> next = curr ->next;// Bypass the node to be deleted
        if(curr->next == NULL){// If deleting the tail

            tail=prev; // Update tail to the previous node

        }


    
       curr->prev = NULL;
       prev -> next = curr ->next;
        curr->next = NULL;
        delete curr;// Free the memory of the deleted node

    }
}
void insertattail(Node* tail,int d){
    if(tail==NULL){
        Node* temp = new Node(d);
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    }
}
void insertion(Node* tail,Node* head,int position,int d){
    if(position ==1){  // If inserting at the head
        insertathead(head,d);
        return;
    }
    
    Node* temp  = head;
    int count=1;

    // Traverse to the node just before the desired position
    while(count<position-1){
         temp= temp->next;
         count++;
    }

    // If position is beyond the end of the list, insert at the tail

    if(temp->next==NULL|| temp ==NULL){
        insertattail(tail,d);
        return;
    }
     // Insert the new node at the desired position
    Node* nodetoinsert =new Node(d);
    nodetoinsert->next = temp->next;// Point new node to the next node
    temp->next->prev=nodetoinsert;

    temp->next = nodetoinsert;   // Point previous node to the new node
    nodetoinsert->prev=temp;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1; 
    Node* tail = node1; 
    print(head);
    //cout<<getLength(head)<<endl;


    insertathead(head,15);
    print(head);


    insertathead(head,18);
    print(head);


    insertathead(head,19);
    print(head);


    insertathead(head,120);
    print(head);

   insertattail(tail,25);
   print(head);
     
   insertion(tail,head,3,100);
   print(head);


   deletenode(1,head,tail);
   print(head);
   return 0;
}