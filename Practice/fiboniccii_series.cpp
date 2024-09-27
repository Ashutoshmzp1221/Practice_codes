#include<iostream>
using namespace std;
int fib(int n)
{
    if(n <= 1)
        return n;
    else
        return fib(n-2) + fib(n-1);
}
int F[100] = {-1};
int fib2(int n)
{
    if(n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if(F[n-2] == -1)
            F[n-2] = fib2(n-2);
        if(F[n-1] == -1)
            F[n-1] == fib2(n-1);
        return fib2(n-2) +fib2(n-1);
    }
}
int main()
{
    cout << fib(6) << endl;
    cout << fib2(6) << endl;
}