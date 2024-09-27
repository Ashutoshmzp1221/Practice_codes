#include<simplecpp>

main_program{
//Write your code here
    turtleSim();
    int n;
    cout<<"Enter the number of side: ";
    cin>>n;
    repeat(n){
        forward(50);
        wait(.5);
        right(-360/n);
    }
    wait(5);

}
