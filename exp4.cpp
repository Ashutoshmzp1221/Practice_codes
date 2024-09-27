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

void print(node* &head)
{
    node* temp = head;
    while(temp != nullptr)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}
void insertathead(int data, node* &head)
{
    node* temp = new node(data);
    temp -> next = head;
    head = temp;
}

void insertail(node* &tail, int data)
{
    node* temp = new node(data);
    tail -> next = temp;
    tail = temp;
}

void insertatmiddle(int data, int pos, node* &head)
{
    node* temp = head;
    if(pos == 1)
        return insertathead(data,head);
    else
    {
        for(int i = 1; i < pos - 1; i++)
            temp = temp -> next;
        node* temp1 = new node(data);
        temp1 -> next = temp -> next;
        temp -> next = temp1;
    }
}
int main()
{
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    insertathead(9,head);
    print(head);
    insertail(tail,15);
    insertail(tail,20);
    print(head);
    insertatmiddle(12,2,head);
    print(head);

}