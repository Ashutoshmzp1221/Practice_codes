#include <iostream>
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
void insertAthead(node* &head, int x)
{
    node* temp = new node(x);
    temp -> next = head;
    head = temp;
}

void insertAtTail(node* &tail, int x)
{
    node* temp = new node(x);
    tail -> next = temp;
    tail = temp;
}

void insertaAtPosition(node* &head,node* &tail, int x,int pos)
{
    // int count = sizelink(head);
    if(pos <= 1) insertAthead(head,x);
    else if(pos > 1){
        int t = pos - 2;
        node* temp = head;
        while(t--) {
            temp = temp -> next;
        }
        if(temp -> next)
        {
            node* p = new node(x);
            p -> next = temp -> next;
            temp -> next = p;
        }else{
            insertAtTail(tail,x);
        }
    }
}
int sizelink(node* head)
{
    int count = 0;
    node* temp = head;
    while(temp)
    {
       count++;
       temp = temp -> next; 
    }
    return count;
}
void print(node* &head)
{
    node* temp = head;
    while(temp)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    node* temp = new node(10);
    node *head = temp, *tail = head;
    insertAthead(head,15);
    print(head);
    
    char n;
    int x,pos;
    do{
        cout << "Enter the position at which you want to insert:  " << endl;
        cout << "Enter 1 to insert at the head: " << endl;
        cout << "Enter 2 to insert at the any position" << endl;
        cout << "Enter 3 to insert at the tail" << endl;
        cout << "Enter 4 to exit" << endl;
        cin >> n;
        cout << "Enter the number you want to insert" << endl;
        cin >> x;
        switch(n)
        {
            case '1':
                insertAthead(head,x);
                print(head);
                break;

            case '2':
                cout << "Enter the position: " << endl;
                cin >> pos;
                insertaAtPosition(head,tail,x,pos);
                print(head);
                break;

            case '3':
                insertAtTail(tail,x);
                print(head);
                break;

            default:
                cout << "Invalid! Enter the valid choice." << endl;
        }
    }while(n != 4);
}