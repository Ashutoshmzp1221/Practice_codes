#include<bits/stdc++.h>
using namespace std;

void check(vector<int> p)
{
    vector<int> temp;
    for(int i = 0; i < p.size(); i++)
    {
        int prod = 1;
        for(int j = 0; j < p.size();j++)
        {
            if(i == j) continue;
            else{
                prod = prod*p[j];
            }
        }
        temp.push_back(prod);
    }
    for(int i = 0 ; i < temp.size(); i++)
        cout << temp[i] << " ";
}

int main()
{
    vector<int> p = {1,2,3,4};
    check(p);
}