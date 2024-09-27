#include<iostream>
using namespace std;

int main(){
    int n,k,m;
    cout<<"Enter the number of row: "<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<endl;
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(k=i;k>0;k--){
            cout<<k;
            m=k;
        }
        for(int l=m+1;l<=i;l++){
            cout<<l;
        }
    }
}