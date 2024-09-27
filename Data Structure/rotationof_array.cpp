#include<iostream>
using namespace std;
// Left incomplete

int main(){
    int n;
    cout<<"Enter the number of the elements: "<<endl;
    cin>>n;
    int arr[n+1];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int pos;
    cout<<"Enter the p[ositons from which you want to rotate: "<<endl;
    cin>>pos;
    int arr1[pos+1];
    int arr2[n];
    for(int i=0;i<n;i++){
        if(i<=pos){
            for(int j=0;j<=pos;j++){
                arr1[j]=arr[i];
            }
        }
        else{
            for(int j=0;j<=i;j++){
                arr2[j]=arr[i];
            }
        }
        
    }

    for(int i=0;i<=pos;i++){
        arr[i]=arr1[i];
    }
    for(int i=pos;i<n;i++){
        for(int j=0;j<n-pos-1;j++){
            arr[i]=arr2[j];
        }
    }
    cout<<"The new array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;

}