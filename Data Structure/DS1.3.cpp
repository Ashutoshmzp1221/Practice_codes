#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

void Insert(Node *prev_node, int new_data);
void DeleteByPos(Node **head, int position);
void DeleteByValue(Node **head, int key);
bool Search(Node *head, int x);
void displayList(Node *n);

int main()
{
    cout << "**********Name: Ashutosh Dwivedi***********\n"
         << "**********UID: 21BCS2669**********\n\n";
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    int c = 1, pos, key, x;
    while (c)
    {
        cout << "Enter 1 to insert a Node\n"
             << "Enter 2 to delete a Node at any position\n"
             << "Enter 3 to delete a Node by any value\n"

             << "Enter 4 to search a Node\n"
             << "Enter 5 to display the List\n"
             << "Enter 0 to exit\n";
        cout << "Enter your choice: ";
        cin >> c;

        switch (c)
        {
        case 1:
            cout << "Enter the value to be inserted: ";
            cin >> x;
            Insert(head, x);
            displayList(head);
            break;
        case 2:
            cout << "Enter the position of the element: ";
            cin >> pos;
            DeleteByPos(&head, pos);
            displayList(head);
            break;
        case 3:
            cout << "Enter the value to be deleted: ";
            cin >> x;
            DeleteByValue(&head, x);
            displayList(head);
            break;

        case 4:
            cout << "Enter the value to be searched: ";
            cin >> x;
            if (Search(head, x) == true)
            {
                cout << "Element Found\n\n";
            }
            else
            {

                cout << "Element not Found\n\n";
            }

            break;
        case 5:
            displayList(head);

            break;
        }
    }
    return 0;
}

void Insert(Node *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        cout << "Please enter a valid node";

        return;
    }

    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;

    prev_node->next = new_node;
}

void DeleteByPos(Node **head, int position)
{
    Node *temp;
    Node *prev;
    temp = *head;
    prev = *head;
    for (int i = 0; i < position; i++)
    {
        if (i == 0 && position == 1)
        {
            *head = (*head)->next;
            free(temp);
        }
        else
        {
            if (i == position - 1 && temp)
            {
                prev->next = temp->next;
                free(temp);
            }
            else
            {
                prev = temp;
                if (prev == NULL)

                    break;
                temp = temp->next;
            }
        }
    }
}
void DeleteByValue(Node **head, int key)
{
    Node *temp = *head;
    Node *prev = NULL;
    if (temp != NULL && temp->data == key)
    {
        *head = temp->next;
        delete temp;
        return;
    }
    else
    {
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL)
            return;
        prev->next = temp->next;

        delete temp;
    }
}
bool Search(Node *head, int x)
{
    Node *current = head;
    while (current != NULL)
    {
        if (current->data == x)
            return true;

        current = current->next;
    }

    return false;
}

void displayList(Node *n)
{
    cout << "List: ";
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << "\n\n";
}
