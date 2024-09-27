#include <iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the starting point and ending point: "<<endl;
    cin>>m>>n;
    int flag=0;
    for(int i=m+1;i<n;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        } 
        if(flag==0){
            cout<<i<<endl;
        }
    }
}