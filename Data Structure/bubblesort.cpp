#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of the elements: "<<endl;
    cin>>n;
    int arr[100];

    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){ 
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"Array after sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}