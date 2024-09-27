#include<iostream>
using namespace std;

int main(){
    int n,arr[n];
    int pd,curr=2,ans=2;
    cout<<"Enter the number of the elements of the array: "<<endl;
    cin>>n;

    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    pd=arr[1]-arr[0];
    for( int i=2;i<n;i++){
        if(pd==arr[i]-arr[i-1]){
            curr++;
        }
        else{
            curr=2;
        }
        ans=max(ans,curr);
    }
    cout<<"The max number of the element: "<<ans;
}