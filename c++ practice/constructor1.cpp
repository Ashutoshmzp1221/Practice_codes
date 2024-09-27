#include<iostream>
using namespace std;

class area{
    public:
    int len,br;
    void value();
    area(){
        len=10;
        br=20;
        cout<<"Length: "<<len<<endl;
        cout<<"Breadth: "<<br<<endl;
    }
};

void area::value(){
    cout<<"Area of Rectangle: "<<len*br<<endl;
}

int main(){
    area rec;
    rec.value();
    area sq;
}
