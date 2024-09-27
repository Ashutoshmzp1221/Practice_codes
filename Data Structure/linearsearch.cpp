#include<iostream>
using namespace std;

int main(){
    int n,num,arr[n+1],flag,pos;
    cout<<"Enter the number of the elements: "<<endl;
    cin>>n;
    cout<<"Enter the element of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the number you want to search: "<<endl;
    cin>>num;
    for(int i=0;i<n;i++){
        if(num==arr[i]){
            flag=1;pos=i;
            cout<<"The number is at position: "<<pos<<endl;
        }
    }
    if(flag!=1){
        cout<<"The number is not present in the array:";
    }
}