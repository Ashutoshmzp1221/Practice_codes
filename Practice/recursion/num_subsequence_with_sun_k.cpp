#include<bits/stdc++.h>
using namespace std;

int printF(int n , int index, int arr[], vector<int> &ds, int k, int temp,int sm)
{
    if(index == n)
    {
        if(sm == k)
        {
            temp++;
        }
    }
    ds.push_back(arr[index]);
    printF(n,index + 1,arr,ds,k,temp,sm);
    ds.pop_back();
    printF(n,index + 1,arr,ds,k,temp,sm);
    return temp;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n ; i++) cin >> arr[i];
    vector<int> ds;
    int temp = 0, sm = 0, k, index = 0;
    cout << "Enter the value: " << endl;
    cin >> k;
    cout <<  printF(n,index,arr,ds,k,temp,sm);
}