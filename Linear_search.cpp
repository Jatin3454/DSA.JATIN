#include<iostream>
using namespace std;
int main(){
   int arr[10],n,i,search,flag=0;
   cout<<"Enter the size of an array";
   cin>>n;
   cout<<"Enter the elements";
   for(i=0;i<n;i++){
    cin>>arr[i];
   }
   cout<<"Enter element to search";
   cin>>search;
   for(i=0;i<n;i++){
    if(arr[i]==search){
        flag=1;
        break;
    }
   }
   if(flag==1){
    cout<<"We found the element";
   }
   if(flag==0){
    cout<<"We not found the element";
   }
    return 0;
}
