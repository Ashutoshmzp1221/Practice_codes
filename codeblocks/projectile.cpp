#include<simplecpp>

main_program
{
    initCanvas("Projectile",500,500);
    int start=getClick();
    Circle c(start/65536,start%65536,5);
    c.penDown();
    double vx=1,vy=-1,gravity=0.01;
    repeat(500)
    {
        c.moveTo(vx,vy);
        vy+=gravity;
        wait(0.01);
    }
    getClick();
    wait(5);
}
