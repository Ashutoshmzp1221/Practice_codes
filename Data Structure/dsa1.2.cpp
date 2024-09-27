#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int num){
    sort(arr,arr+n);
    int st=0,en=n;
    while(st<=en){
        int mid=(st+en)/2;
        if(arr[mid]==num){
            return mid;
        }
        else if(arr[mid]>num){
            en=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return -1;
}

int linear_search(int arr[],int n,int num){
    int pos, flag=0;
    for(int i=0;i<n;i++){
        if(num==arr[i]){
            flag=1;pos=i+1;
            cout<<"The position of the number "<<num<<" "<<pos<<endl;
        }
    }
    if(flag!=1){
        return -1;
    }
    return 0;
}
int main(){
    int n,arr[n+1],num;
    cout<<"Enter the number of the elements you want: "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array: "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Enter the number you want to search: "<<endl;
    cin>>num;
    int p;
    cout<<"Enter 1 for linear search: "<<endl;
    cout<<"Enter 2 for binary search: "<<endl;
    cin>>p;
    switch(p){
        case 1:
        linear_search(arr,n,num);
        break;

        case 2:
        cout<<"The position of the element is "<<binarysearch(arr,n,num);
        break;
    }
}