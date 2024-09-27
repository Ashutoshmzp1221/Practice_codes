#include<simplecpp>

main_program
{
    turtleSim();

    repeat(36)
    {
        forward(20);
        repeat(300)
        {
            forward(0.09);
            right(1);
        }
        forward(20);
        repeat(300)
        {
            forward(0.09);
            left(1);
        }
        //right(10);
        left(10);
    }

wait(5);
}

