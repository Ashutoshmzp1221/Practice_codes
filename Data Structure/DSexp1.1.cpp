#include<iostream>

using namespace std;
void insertion(int arr[],int flag,int num,int n){
    cout<<"Enter the position and the number you want to insert: ";
        cin>>flag>>num;
        n++;
        for(int i=n-1;i>=flag;i--){
            arr[i]=arr[i-1];
        }
        arr[flag]=num;
}

int main()
{
    int n,arr[100],p;
    cout<<"Enter the number of the elemnts of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the operation: ";
    cout<<"Enter 1 to insert: ";
    cout<<"Enter 2 to find: ";
    cout<<"Enter 3 to print: ";
    cout<<"Enter 4 to delete: ";
    cin>>p;
    
    switch(p){
        case 1:
        
        
        
        cout<<"The new array is: ";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        break;
        
        case 2: 
        int x;
        cout<<"Enter the number you want to search: ";
        cin>>x;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                p=i;
            }
        }
        cout<<"The poaition of the numbr is: "<<p;
        break;
        
        case 3:
        cout<<"Print the array: ";
        for(int i=0;i<n;i++){
            cout<<arr[i];
        }
        break;
        
        case 4:
        int del;
        cout<<"Enter the position you want to delete: ";
        cin>>del;
        for(int i=del;i<n;i++){
            arr[i]=arr[i+1];
        }
        n--;
        cout<<"The new array is: ";
        for(int i=0;i<n;i++){
            cout<<arr[i];
        }
    }
    return 0;
}
