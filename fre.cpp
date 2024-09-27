#include<bits/stdc++.h>
using namespace std;

void find(vector<int> &arr)
{
    map<int,int> mp;
    for(int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }

    for(auto pr: mp)
    {
        cout << pr.first << " " << pr.second<<endl;
    }
}

int main()
{
    vector<int> arr = {1,3,5,7,9,1,3,5,7,9,1};
    find(arr);
}