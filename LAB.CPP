#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s1,s2;
    int i = 1;
    // for inserting in the queue we will enqueue in the stack 1
    while(i < 6)
        s1.push(i);
    // now we insert the elements in the reverse order in stack 2 for dequeue operation
    while(!s1.empty())
    {
        int n = s1.top();
        s1.pop();
        s2.push(n);
    }
    s2.pop();
    
}