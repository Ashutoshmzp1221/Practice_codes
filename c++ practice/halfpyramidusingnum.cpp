#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter number of row: "<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<endl;
        for(j=1;j<=i;j++){
            cout<<i;
        }
    }
}