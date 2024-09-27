#include<bits/stdc++.h>
using namespace std;

void subsequnceF(int i, vector<int> &v, int arr[], int n)
{
    if(i == n)
    {
        for(auto it : v)
            cout << it << " ";
        cout << endl;
        return;
    }
    v.push_back(arr[i]);
    subsequnceF(i + 1, v,arr,n);
    v.pop_back();
    subsequnceF(i+1,v,arr,n);
}

void sumk(int i, vector<int> &v, int arr[], int n,int s,int sum)
{
    if(i==n)
    {
        if(sum == s)
        {
            for(auto it : v)
                cout << it << " ";
            cout << endl;
        }
        return;
    }

    v.push_back(arr[i]);
    s += arr[i];
    sumk(i + 1,v,arr,n,s,sum);
    v.pop_back();
    s -= arr[i];
    sumk(i + 1,v,arr,n,s,sum);
}

int main()
{
    int n = 3;
    int arr[] = {3,1,2};
    vector<int> v;
    // subsequnceF(0,v,arr,n);
    sumk(0,v,arr,n,0,3);
    return 0;
}