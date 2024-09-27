#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter the value: "<<endl;
    cin>>n;
    for(i=n;i>0;i--){
        cout<<endl;
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
    }
}