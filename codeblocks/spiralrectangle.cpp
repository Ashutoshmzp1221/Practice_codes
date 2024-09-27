#include<simplecpp>

main_program
{
    turtleSim();
    int i=1,n;
    cout<<"Enter number of iteration you wants: "<<endl;
    cin>>n;
    repeat(n)
    {
        forward(i*10);
        right(90);
        wait(0.5);
        i=i+1;
    }
    wait(10);

}
