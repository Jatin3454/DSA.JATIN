#include<iostream>
using namespace std;
int main(){
    int a[4][4],b[10][3],i,j,c=-1;
    cout<<"Enter the values of 4*4 matrix";
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(a[i][j]!=0){
                c++;
                b[c][0]=i;
                b[c][1]=j;
                b[c][2]=a[i][j];
            }
        }
    }  
    cout<<"The 3 column representation of the sparse matrix";
      for(i=0;i<c;i++){
        for(j=0;j<4;j++){
            cout<<b[i][j];
        }
        cout<<endl;
      }
      return 0;
}
