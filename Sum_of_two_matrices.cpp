#include<iostream>
using namespace std;
int main(){
    int a[20][20],b[20][20],c[20][20],i,j;
    int sum=0;
    cout<<"Enter the First Matrix";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
     cout<<"Enter the second Matrix";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
    cout<<"The sum of matrix is"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
                cout<<c[i][j]<<" ";    
        }
         cout<<endl;
    }
    return 0;
}
