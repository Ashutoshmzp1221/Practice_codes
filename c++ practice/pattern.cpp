#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;
    int p=n;
    for(int i=1;i<=n;i++){
        cout<<endl;
        for(int j=1;j<=p;j++){
            cout<<j<<" ";
        }
        p--;
    }
}