#include<iostream>
using namespace std;

int main(){
    int n,arr[n+1];
    cout<<"Enter the number of the elements of the array: "<<endl;
    cin>>n;

    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    cout<<"Array after sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}