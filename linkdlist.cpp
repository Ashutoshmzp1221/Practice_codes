#include<iostream>
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

void inserthead(node* &head,int data)
{
    node* temp = new node(data);
    temp -> next = head;
    head = temp;
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
    inserthead(head, 20);
    inserthead(head,30);
    print(head);

}