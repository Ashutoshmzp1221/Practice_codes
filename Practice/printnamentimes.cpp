#include<iostream>
using namespace std;

void name(int n)
{
    if(n == 0)
        return ;
    cout << "Ashutosh"<< endl;
    name(n-1);
}

int main()
{
    int n;
    cin >> n;
    name(n);
}