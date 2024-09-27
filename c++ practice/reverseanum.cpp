#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num,rem,dig,rev=0;
    cout<<"Enter the number of digits: "<<endl;
    cin>>dig;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    while(num>0){
        rem=num%10;
        rev=rev+rem*pow(10,dig);
        dig--;
        num=num/10;
    }
    cout<<"Number after reversing: "<<endl;
    cout<<rev;
}