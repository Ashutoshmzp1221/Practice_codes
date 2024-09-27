#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n+1],mx=INT_MIN;

    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        cout<<mx<<" ";
    }
}