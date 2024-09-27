#include<iostream>
using namespace std;

int main(){
    int row,col,i,j,n;
    cout<<"Enter the number row: "<<endl;
    cin>>row;
    cout<<"Enter the number colomun: "<<endl;
    cin>>col;
    n=2*row-1;

    for(i=1;i<=row;i++){
        cout<<endl;
       if(i==1||i==row){
           for(j=1;j<=col;j++){
               cout<<"*";
           }
       }
       else{
           for(j=1;j<=col;j++){
               if(j==1||j==col)
               cout<<"*";
               else
               cout<<" ";
           }
       }
    }
}