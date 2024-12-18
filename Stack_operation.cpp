#include<iostream>
using namespace std;
#define max 100
    int i,top=-1,a[max];
     void push();
     void pop();
     void peek();
int main(){
    int choice;
     do{
        cout<<"\n1.Push\n2.Pop\n3.Peek\n4.Exit\n";
        cin>>choice;
        switch (choice){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: peek();
            break;
            default:printf("Enter valid Number\n");
            break;
            case 4: exit(0);
            // break;
        }
    }       
    while(choice!=0);
    return 0;
    }
    void push(){
        int n;
        cout<<"Enter the value";
        cin>>n;
        if(top==max-1){
            cout<<"Stack overflow\n";
        }
        else{
            top=top+1;
            a[top]=n;
            cout<<"Number is pushed";
        }
    }
    void pop(){
        if(top<0){
            cout<<"stack is underflow\n";
        }
        else{
            top=top-1;
            cout<<"Number is poped";
        }
    }
    void peek(){
        if(top==-1){
            cout<<"stack is empty";
        }
        else{
            cout<<"Topmost element is"<<a[top];
        }
    }
