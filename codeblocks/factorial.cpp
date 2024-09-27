#include<simplecpp>

main_program
{
    int p=1,n;
    cout<<"Enter the number: ";
    cin>>n;
    repeat(n)
    {
        p=p*n;
        n=n-1;
    }
    cout<<"Factorial of the number: "<<p;
}
