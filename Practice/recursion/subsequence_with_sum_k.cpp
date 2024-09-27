#include<bits/stdc++.h>
using namespace std;

void sum(int n, int index, int arr[], vector<int> &ds,int k)
{

    if(index == n)
    {
        int sm = 0;
        for(auto i: ds) sm += i;
        if(sm == k)
        {
            for(auto i: ds) cout << i << " ";
            cout << endl;
        }
        return;
    }
    ds.push_back(arr[index]);
    sum(n, index+1, arr, ds,k);
    ds.pop_back();
    sum(n, index+1, arr, ds,k);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int index = 0;
    int k;
    cout << " Enter the value: "<< endl;
    cin >> k;
    vector<int> ds;
    sum(n, index, arr, ds, k);
}