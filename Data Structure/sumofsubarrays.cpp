#include<iostream>
using namespace std;

int main(){
    int n,arr[n+1],sum=0;
    cout<<"Enter the number of the elemets of the array: ";
    cin>>n;

    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<endl;;
        }
    }
} 