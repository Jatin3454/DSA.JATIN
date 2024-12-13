#include<iostream>
using namespace std;
int main(){
    int i,j,n,key,arr[100];
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the array";
        cin>>arr[i];
    }
    for(i=1;i<n;i++){
        key=arr[i];
        for(j=i-1;j<n;j--){
            if(j>=0 && arr[j]>key){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=key;
    }
    cout<<"The sorted array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
