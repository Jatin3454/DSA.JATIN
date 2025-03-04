//quick sort Code using c++
#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int count = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

//place pivot at right place
int pivotIndex = s + count;
swap(arr[pivotIndex],arr[s]);

//left and right partion  wale part m 
int i=s,j=e;
while(i<pivotIndex  && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
     while(arr[j]>pivot){
            j--;
        }
    if(i<pivotIndex  && j>pivotIndex){
        swap(arr[i++],arr[j--]);
    }
}
return pivotIndex;
}

void quickSort(int arr[], int s ,int e){
    //base case
    if(s>=e)return;

    //partition karte h
    int p = partition(arr,s,e);

    //left
    quickSort(arr,s,p-1);
    //right
     quickSort(arr,p+1,e);
}
int main(){
    int arr[10]={1,2,4,63,32,55,663,31,67,90};
    int n=10;

    quickSort(arr,0,n-1);

    //print the sorted arrayn
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
