#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int data)
    {
        this -> data = data;
        this -> left = nullptr;
        this -> right = nullptr;
    }
};

void inorder(node* t)
{
    if(t == nullptr)
        return;
    else{
        inorder(t -> left);
        cout << t -> data <<" ";
        inorder(t -> right);
    }
}

void mirror(node* t)
{
    if(t == nullptr) return;
    else{
        node* temp;
        mirror(t -> left);
        mirror(t -> right);
        temp = t -> left;
        t -> left = t -> right;
        t -> right = temp;
    }
}

int main()
{
    node* root = new node(1);
    root -> left = new node(2);
    root -> right = new node(3);
    root -> left -> left = new node(4);
    root -> left -> right = new node(5);

    cout << " Inorder traversal " << endl;
    
    inorder(root);
    mirror(root);
    cout <<endl;
    inorder(root);
}