#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int data)
    {
        this -> data = data;
        this -> next = nullptr;
    }
};
void inserttail(node* &tail, int data)
{
    node* temp = new node(data);
    tail -> next = temp;
    tail = temp;
}
bool palindrome(node* &head)
{
    node* temp = head;
    stack<int> st;

    while(temp)
    {
        st.push(temp -> data);
        temp = temp -> next;
    }

    while(head)
    {
        int i = st.top();
        st.pop();
        if(i != head -> data) return false;
        head = head -> next;
    }
    return true;
}
void print(node* &head)
{
    node* temp = head;
    while(temp)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}
int main()
{
    node* temp = new node(10);
    node* head = temp;
    node* tail = head;
    inserttail(tail, 20);
    inserttail(tail,30);
    inserttail(tail,20);
    inserttail(tail,20);
    print(head);
    cout << palindrome(head);

}

