#include<bits/stdc++.h>
using namespace std;

void combinatiob_sum(int ind, vector<vector<int>> &ds, vector<int> &p, int target,int arr[])
{
    if(ind == p.size() - 1)
    {
        if(target == 0) ds.push_back(p);
        return;
    }

    if(arr[ind] <= target)
    {
        p.push_back(arr[ind]);
        combinatiob_sum(ind,ds,p,target-arr[ind],arr);
        p.pop_back();
    }
    combinatiob_sum(ind+1,ds,p,target,arr);
}

int main()
{
    int arr[] = {2,3,6,7};
    vector<vector<int>> ds;
    vector<int> p;
    int target = 7;
    int ind = 0;
    combinatiob_sum(ind, ds, p, target,arr);
    for(auto it: ds)
    {
        for(auto j: it)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}