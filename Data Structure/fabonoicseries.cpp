#include <iostream>
using namespace std;
void fab(){
    int t0=0,t1=1,next;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        next=t0+t1;
        cout<<next<<endl;
        t0=t1; t1=next;
        
    }
}
int main()
{

fab();
return 0;

}