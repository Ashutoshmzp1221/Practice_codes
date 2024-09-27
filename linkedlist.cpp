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

void inserthead(node* &head, int data)
{
    node* temp = new node(data);
    temp -> next = head;
    head = temp;
}

void inserttail(node* &head, int data)
{
    node* tail = head;
    node* temp = new node(data);
    tail -> next = temp;
    tail = temp;
}

void insertmiddle(node* &head,int pos, int data)
{
    node* temp1 = head;
    if(pos==1)
        inserthead(head,data);
    // else if(pos== nullptr)
    //     inserttail(head,data);
    else{for(int i = 1; i < pos-1; i++)
        temp1 = temp1 -> next;
    node* temp = new node(data);
    temp -> next = temp1 -> next;
    temp1 -> next = temp;}
}

void deletenode(int pos, node* &head)
{
    if(pos == 1)
    {
        node* temp = head;
        int p = head -> data;
        head = head -> next;
        temp -> next = nullptr;
        delete temp;
    }
    else
    {
        node* curr = head;
        node* prev = nullptr;
        int cnt = 1;
        while(cnt < pos)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = nullptr;
        delete curr;
    }
}

void reverse(node* &head){
    node *prev = nullptr,*curr,*forw;
    forw = head;
    while(forw){
        curr = forw;
        forw = forw -> next;
        curr -> next = prev;
        prev = curr;
    }
    head = prev;
}

bool search(node* &head, int n){
    node* temp = head;
    while(temp){
        if(temp -> data == n) return true;
        temp = temp -> next;
    }
    return false;
}

void print(node* &head)
{
    node* temp = head;
    while(temp != nullptr)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    } 
}

int main()
{
    node* temp = new node(10);
    cout << temp -> data << endl;
    node* head = temp;
    inserttail(head,15);
    inserthead(head,9);
    insertmiddle(head, 1, 14);
    print(head);
    reverse(head);
    cout << endl;
    cout << "Linked list After reversing it: " << endl;
    cout << endl;
    print(head);
    cout << endl;
    cout << "Linked list after deleting an element from it: " << endl;
    deletenode(2,head);
    print(head);
    cout << endl;
    int n;
    cout << "Enter the number you want to search: " << endl;
    cin >> n;
    if(search(head,n)) cout << n << " is present in the linked list" << endl;
    else cout << n << " is not present in the linked list " << endl;
}