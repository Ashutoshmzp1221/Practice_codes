#include <simplecpp>
main_program{
    turtleSim();
    int n;
    cout<<"Number of square you want: ";
    cin>>n;
    repeat(n){
        repeat(4){
            forward(100);right(90);wait(.25);
        }
        right(35);
    }
    wait(10);
}
