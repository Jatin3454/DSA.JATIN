#include<iostream>
using namespace std;
int main(){
    int arr[20],i,j,temp,n;
    cout<<"Enter the elements";
    cin>>n;
    cout<<"elements are";
    for(i=0;i<n;i++){
       cin>>arr[i];
    }
     for(i=0;i<n;i++){
         for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
         }
     }
     cout<<"sorted array is:- ";
     for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     return 0;
}
