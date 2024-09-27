#include<iostream>
using namespace std;

int main(){
    int i,j,count=1,n;
    cout<<"Enter the number of row: "<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<count++<<" ";
        }
        cout<<endl;
    }
}