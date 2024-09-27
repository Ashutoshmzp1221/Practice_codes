#include <simplecpp>
main_program{
    turtleSim();
    left(30);
    repeat(7){
        forward(200);right(180-180/7);wait(.5);
    }
    wait(10);
}
