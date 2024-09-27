#include<iostream>
using namespace std;

class stack
{
    public:
    int top;
    int *arr;
    int size;

    stack(int size)
    {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if(size - top > 1)
        {
            arr[top] = element;
            top++;
        }
        else cout << "stack overflow" << endl;
    }

    void pop()
    {
        if(top >= 0) top--;
        else cout << "Stack Underflow" << endl;
    }

    int peek()
    {
        if(top >= 0) return arr[top];
        else{
            cout << "Stack is empty" << endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top == -1) return true;
        else return false;
    }
};


int main()
{
    stack st(5);
    st.push(5);
    // st.push(4);
    // st.push(3);
    // st.push(2);
    // st.push(1);

    cout << st.peek();
}