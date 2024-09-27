#include<iostream>
using namespace std;

int factn(int num){
    int prod=1;
    for(int i=num;i>0;i--){
        prod=prod*i;
    }
    // cout<<prod<<endl;
    return prod;
}

int main(){
    int row,col;
    cout<<"Enter number of the rows: "<<endl;
    cin>>row;
    for(int i=0;i<=row;i++){
        for(int j=0;j<=i;j++){
            cout<<factn(i)/(factn(j)*factn(i-j))<<" ";
        }
        cout<<endl;
    }
}