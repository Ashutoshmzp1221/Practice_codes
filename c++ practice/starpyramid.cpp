#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rowa: "<<endl;
    cin>>n;
    int p=n;
    for(int i=1;i<=n;i++){
        cout<<endl;
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
    }
    for(int i=n;i>n;i--){
        cout<<endl;
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
    }
}