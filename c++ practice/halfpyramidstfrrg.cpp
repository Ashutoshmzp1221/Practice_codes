#include<iostream>
using namespace std;

int main(){
    int i,j,k;
    int n;
    cout<<"Enter the value: "<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<endl;
        for(j=1;j<=n;j++){
            if(j<=n-i)
            cout<<" ";
            else
            cout<<"*";
        }
    }
}