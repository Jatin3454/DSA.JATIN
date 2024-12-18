#include<iostream>
using namespace std;
int main(){
    int arr[10],n,search;
    cout<<"enter array elements";
    cin>>n;
    cout<<"enter the elements of an array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enterbb the element to be searhed";
    cin>>search;

    int start=0;
    int end = n-1;
    int mid;
    bool found=false;
    while(start<=end){
        mid=start + (end-start)/2;
    if(arr[mid]==search){
        cout << "Element found at index " << mid << endl;
            found = true;
            break;
    }
     if(arr[mid]>search){
        end =mid-1;
    }
    else{
        start=mid+1;
    }
    if (!found) {
        cout << "Element not found in the array.\n";
    }

    return 0;
    }
}
