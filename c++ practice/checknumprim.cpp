#include<iostream>
using namespace std;

int main(){
    int n,flag=0;
    cout<<"Enter a number1: "<<endl;
    cin>>n;

    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"The number is not prime"<<endl;
            flag=1;
            break;
        }
        
    }
    if(flag==0){
        cout<<"The number is prime"<<endl;
    }
}