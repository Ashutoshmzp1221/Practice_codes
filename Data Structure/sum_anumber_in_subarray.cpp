#include<iostream>
using namespace std;

int main()
{
    int n,s;
    cin>>n>>s;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int st=-1,en=-1,sum=0,i=0,j=0;

    while(j<n && sum<=s)
    {
        sum+=arr[j];
        j++;
    }

    if(sum==s)
    {
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }

    while(j<n)
    {
        sum+=arr[j];
        while(sum>s)
        {
            sum-=arr[i];
            i++;
        }
        if(sum==s)
        {
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en<<endl;

    return 0;
}