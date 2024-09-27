#include<iostream>
#include<cmath>
using namespace std;

int cube(int n) {
    int i = 0;
    int r = 0;
    if(n==0){
        return 0;
    }
    else{
        i = pow(n,3);
        r = cube(n-1) + i;
    }
    return r;
}
int main(){
    int n;
    cin >> n;
    cout << cube(n);

    return 0;
}