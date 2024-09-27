#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    int flag=0;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            cout<<"The number is non prime"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Number is prime"<<endl;
    }
}