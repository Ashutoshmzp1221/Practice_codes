#include <simplecpp>
main_program{
    turtleSim();
    int radius,n;
    cout<<"Enter the radius: ";
    cin>>radius;
    cout<<"Enter the number of cicles: ";
    cin>>n;
    repeat(n){
        repeat(360){
            forward(radius);right(360/360);
        }
        right(10);
    }
    wait(10);
}
