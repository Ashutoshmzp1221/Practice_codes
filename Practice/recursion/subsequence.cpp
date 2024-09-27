/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;

void printF(int n , int index , int arr[],  vector<int> &ds)
{
    if(index == n)
    {
        for(auto i: ds) cout << i << " ";
        if (ds.size() == 0) cout << "{}";
        cout << endl;
        return;
    }
    ds.push_back(arr[index]);
    printF(n, index+1, arr, ds);
    ds.pop_back();
    printF(n, index+1, arr, ds);
}


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i++) cin >> arr[i];
    vector<int> ds;
    int index = 0;
    printF(n,index, arr, ds);
}