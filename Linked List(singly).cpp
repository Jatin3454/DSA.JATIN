#include<iostream>
using namespace std;
class Node{
    public:
    int data;  // Data stored in the node
    Node* next;   // Pointer to the next node in the list


    //constructor
    Node(int data){
        this-> data = data;    // Initialize the data
        this-> next = NULL;    // Initialize the next pointer to NULL

    }
    //Destructor
    ~Node(){
        int value =  this-> data;   // Store the data of the node being deleted
        if(this->next!= NULL){
            delete next;    // Recursively delete the next node
            this->next = NULL;  // Set the next pointer to NULL
        }


//memory free ho rhi h 
        cout<< "Memory is free"<<value<<endl;
    }
};




void insertathead(Node* & head,int d){
    Node* temp=new Node(d);// Create a new node with data `d`

     temp -> next=head;// Point the new node's `next` to the current head
     head=temp;// Update the head to point to the new node
}


void insertattail(Node* &tail,int d){
    Node* temp=new Node(d);  // Create a new node with data `d`
        tail->next=temp; // Point the current tail's `next` to the node
        tail=temp;  // Update the tail to point to the new node


}
void insertatposition(Node* tail,Node* head,int position,int d){
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
    temp->next = nodetoinsert;   // Point previous node to the new node

 }
void deletenode(int position,Node* &head,Node* &tail){
    // if(position<-1 || position> )

    if(position==1){// If deleting the head

        Node* temp = head;
        head = head->next;// Update head to the next node
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


    
        curr -> next = NULL;  // Disconnect the node from the list

        delete curr;// Free the memory of the deleted node

    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=0){  // Traverse the list

    cout<<temp->data<<" ";
        temp = temp->next;    // Move to the next node
    }
    cout<<endl;
}
int main(){
     // Insert elements at the head
     // Create the first node
     Node* node1 = new Node(10);
     Node* head = node1;// Initialize head
     Node* tail = node1; // Initialize tail

    print(head);

    insertattail(tail,12);
    print(head);



    insertattail(tail,100);
    print(head);
     // Print the linked list
     

     insertattail(tail,800);
    print(head);

 // Insert element at position 3
     insertatposition(tail,head,3,22);
     print(head);


    deletenode(2,head,tail);
    print(head);

    deletenode(4, head, tail);
    print(head);
    
    cout<<"Haed "<<head->data<<endl;
    cout<<"taiil"<<tail->data<<endl;

     return 0; 
    }
