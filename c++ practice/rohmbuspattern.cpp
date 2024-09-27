#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of row: "<<endl;
    cin>>n;

    for(int i;i<=n;i++){
        cout<<endl;
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=n;k++){
            cout<<"* ";
        }
    }
}