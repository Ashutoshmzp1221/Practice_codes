#include <iostream>
using namespace std;

int factn(int n){
    int prod=1;
    for(int i=n;i>0;i--){
        prod=prod*i;
    }
    return prod;

}

int main(){
    int n,r;
    cin>>n>>r;

    int ans= factn(n)/(factn(n-r)*factn(r));
    cout<<ans;

}