#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this -> data =d;
        this -> next = NULL;
    }

    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"Memmory free for nodee with data"<<value<<endl;
    }
};
void insertnode(Node* &tail,int element,int d){
    if(tail==NULL){
        Node* newNode  = new Node(d);
        tail =newNode ;
        newNode ->next = newNode ;
    }
    else{
        Node* curr = tail;

        while(curr -> data != element){
            curr = curr -> next;
            if (curr == tail) {
                // Element not found, exit or handle error
                cout << "Element not found in the list!" << endl;
                return;

        }
    }
    Node* temp = new Node(d);
    temp->next = curr->next;
    curr->next = temp;

    }
}
void print(Node* tail){
    if (tail == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    Node* temp = tail;
    do{
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    while(temp!=tail);
    cout<<endl;
}
void deleteNode(Node* &tail,int value){
    if (tail == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    else{
        Node* prev = tail;
        Node* curr = prev -> next;

        if(tail == NULL) {
            cout<<"List is empty"<<endl;
            return;
    }
        while(curr -> data!=value){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr  -> next;
        if(tail == NULL) {
            tail = prev;
    }

        if (tail == curr) {
                tail = prev;
        }
        curr -> next = NULL;
        delete curr;

    }
}
int main(){
    Node* tail = NULL;

    insertnode(tail,5,7);
    print(tail);
    insertnode(tail, 7, 10); // Insert 10 after 7
    print(tail);

    insertnode(tail, 7, 15); // Insert 15 after 7
    print(tail);

    insertnode(tail, 10, 20); // Insert 20 after 10
    print(tail);

    deleteNode(tail,20);
    print(tail);
    return 0;

}
