#include<bits/stdc++.h>
using namespace std;

vector<int> moveZeroes(vector<int> &arr, int n){
    sort(arr.begin() , arr.end());
    int count = 0;
    int i = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[count++] = arr[i];
        }
        else i++;
    }
    while(i > 0)
    {
        arr.pop_back();
        i--;
    }
    while(i > 0)
    {
        arr.push_back(0);
        i--;
    }
    return arr;
}

int main(){
   int q,n;
 
   cin>>q;
   while(q--){
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
         vector<int> result =  moveZeroes(arr,n);
         for(int i=0;i<n;i++){
              cout<<result[i]<<" ";
         }
   }
   
   return 0;
}