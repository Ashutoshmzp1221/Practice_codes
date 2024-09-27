#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int i=0,rem,binary=0,num;
    cout<<"Enter a number: "<<endl;
    cin>>num;

    while(num>0){
        rem=num%2;
        binary=rem+pow(10,i);
        num=num/2;
        i++;
    }
    cout<<"Binary Form: "<<endl;
    cout<<binary;
}