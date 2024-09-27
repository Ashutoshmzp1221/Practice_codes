#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void inserthead(node* &head, int data)
{
    try
    {
        node* temp = new node(data);
        temp->next = head;
        head = temp;
    }
    catch (bad_alloc& e)
    {
        cout << "Memory allocation failed: " << e.what() << endl;
    }
}

void inserttail(node* &head, int data)
{
    try
    {
        node* temp = new node(data);
        node* tail = head;
        while (tail->next != nullptr) {
            tail = tail->next;
        }
        tail->next = temp;
    }
    catch (bad_alloc& e)
    {
        cout << "Memory allocation failed: " << e.what() << endl;
    }
}

void insertmiddle(node* &head, int pos, int data)
{
    try
    {
        if (pos == 1) {
            inserthead(head, data);
        }
        else {
            node* temp1 = head;
            for (int i = 1; i < pos - 1; i++) {
                if (temp1 == nullptr) {
                    cout << "Position out of bounds" << endl;
                    return;
                }
                temp1 = temp1->next;
            }
            node* temp = new node(data);
            temp->next = temp1->next;
            temp1->next = temp;
        }
    }
    catch (bad_alloc& e)
    {
        cout << "Memory allocation failed: " << e.what() << endl;
    }
}

void deletenode(int pos, node* &head)
{
    try
    {
        if (pos == 1)
        {
            node* temp = head;
            head = head->next;
            temp->next = nullptr;
            delete temp;
        }
        else
        {
            node* curr = head;
            node* prev = nullptr;
            int cnt = 1;
            while (cnt < pos)
            {
                prev = curr;
                curr = curr->next;
                cnt++;
            }
            if (curr == nullptr) {
                cout << "Position out of bounds" << endl;
                return;
            }
            prev->next = curr->next;
            curr->next = nullptr;
            delete curr;
        }
    }
    catch (exception& e)
    {
        cout << "Exception occurred: " << e.what() << endl;
    }
}

void reverse(node* &head)
{
    try
    {
        node* prev = nullptr;
        node* curr = nullptr;
        node* forw = head;
        while (forw)
        {
            curr = forw;
            forw = forw->next;
            curr->next = prev;
            prev = curr;
        }
        head = prev;
    }
    catch (exception& e)
    {
        cout << "Exception occurred: " << e.what() << endl;
    }
}

bool search(node* &head, int n)
{
    try
    {
        node* temp = head;
        while (temp)
        {
            if (temp->data == n) return true;
            temp = temp->next;
        }
    }
    catch (exception& e)
    {
        cout << "Exception occurred: " << e.what() << endl;
    }
    return false;
}

void print(node* &head)
{
    try
    {
        node* temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    catch (exception& e)
    {
        cout << "Exception occurred: " << e.what() << endl;
    }
}

int main()
{
    try
    {
        cout << "Hey, I am a linked list, welcome you with this beautiful implementation of mine from Ashutosh" << endl;
        node* temp = new node(10);
        cout << temp->data << endl;
        node* head = temp;
        inserttail(head, 15);
        inserthead(head, 9);
        insertmiddle(head, 1, 14);
        print(head);
        reverse(head);
        cout << endl;
        cout << "Linked list After reversing it: " << endl;
        cout << endl;
        print(head);
        cout << endl;
        cout << "Linked list after deleting an element from it: " << endl;
        deletenode(2, head);
        print(head);
        cout << endl;
        int n;
        cout << "Enter the number you want to search: " << endl;
        cin >> n;
        if (search(head, n)) cout << n << " is present in the linked list" << endl;
        else cout << n << " is not present in the linked list " << endl;
    }
    catch (exception& e)
    {
        cout << "Exception occurred: " << e.what() << endl;
    }
}
