#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* prev;
    node* next;

    node(int d)
    {
        this -> data = d;
        this -> prev = nullptr;
        this -> next = nullptr;
    }
};

void print(node* head)
{
    node* temp = head;
    while(temp != nullptr)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void inserthead(int data, node* &head)
{
    node* temp = new node(data);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

void insertatmiddle(int data, int pos, node* &head)
{
    if(pos == 1)
    {
        inserthead(data,head);
        return;
    }
    node* temp = head;
    for(int i = 1; i < pos - 1; i++)
    {
        temp = temp -> next;
    }
    node* tm = new node(data);
    tm -> next = temp -> next;
    tm -> prev = temp;
    temp -> next = tm;

}

void insertail(int data, node* &tail)
{
    node* temp = new node(data);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}


int length(node* head)
{
    int len = 0;
    node* temp = head;
    while(temp != nullptr)
    {
        len++;
        temp = temp -> next;
    }
    return len;
}

int main()
{
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    print(head);
    inserthead(12, head);
    print(head);
    cout << length(head)<< endl;
    insertail(15, tail);
    print(head);
    insertatmiddle(17,2,head);
    print(head);
}