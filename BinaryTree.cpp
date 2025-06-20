#include<iostream>
#include<queue>
using namespace std;
 class node{
    public:
    int data;
    node *left;
    node *right;
    node(int n){
        this -> data = n;
        this -> left = NULL;
        this -> right = NULL;
    }
 };
 node* buildTree(node* root){
    cout<<"Enter the data:"<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for inserting in left of"<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inserting in right of"<<data<<endl;
    root->right=buildTree(root->right);
  return root;  

 }

 void levelOrderTraversal(node* root){
    if(root == NULL)return;
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp=q.front();
        
        q.pop();

        if(temp ==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }

        }
        
    }
 }

 void inorder(node* root){
    //base case
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
 }
 void preorder(node* root){
    //base case
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    inorder(root->right);
 }
 void postorder(node* root){
    //base case
    if(root==NULL){
        return;
    }
    preorder(root->left);
    postorder(root->right);
     cout<<root->data<<" ";
 }
 int main(){
    node* root=NULL;

    //creating a tree
    root=buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    //level order
    levelOrderTraversal(root);

    //inorder
    cout<<"Inorder Traversal "<<endl;;
    inorder(root);
    cout<<endl;
    //preorder
     cout<<"Preorder Traversal "<<endl;
    preorder(root);
cout<<endl;
     cout<<"Postorder Traversal "<<endl;
    postorder(root);
    return 0;
 }
