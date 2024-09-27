#include<simplecpp>
main_program
{
    turtleSim();
    int n;
    float r=0.1;
    cout<<"Enter number of iteration you want: "<<endl;
    cin>>n;
    repeat(n)
    {
        repeat(360)
        {
            forward(r*1);
            right(1);
        }
        r=r+0.1;
    }
    wait(5);
}
