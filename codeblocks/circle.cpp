#include<simplecpp>

main_program{
//Write your code here
turtleSim();
int radius;
cout<<"Enter the radius: ";
cin>>radius;
repeat(360){
forward(radius);left(360/360);
}
wait(5);
}
