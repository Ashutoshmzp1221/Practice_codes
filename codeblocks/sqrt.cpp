#include<simplecpp>

main_program
{
//Write your code here
    float n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    if(n>0)
        cout<<"The square root of the number is "<<sqrt(n)<<endl;
    else
        cout<<"The square root of the number is "<<sqrt(-1*n)<<"i"<<endl;
}

