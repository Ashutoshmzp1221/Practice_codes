#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int a,b;
    printf("Enter the two number: ");
    cin>>a>>b;

    int temp;
    temp=a;
    a=b;
    b=temp;

    printf("The two numbers after the swappping is: %D/t%D",a,b);
}