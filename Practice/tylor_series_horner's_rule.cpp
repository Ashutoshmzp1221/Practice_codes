#include<iostream>
using namespace std;

double e(int x, int n)
{
    static double r = 1;
    if(n == 1)
        return r;
    else
    {
        r = 1 + x/(n*r);
        return e(x,n-1);
    }
}

int main()
{
    cout << e(1,10);
}