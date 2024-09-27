#include<bits/stdc++.h>
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

void check(node* root, int sum)
{
    vector<int> t;
    node* temp = root;
    t.push_back(root -> data);
    temp= temp -> left;
    t.push_back(temp -> data);
    temp = temp -> left;
    t.push_back(temp -> data);
    temp = temp -> right;
    t.push_back(temp -> data);
    int s = 0;
    for(int i = 0; i < t.size(); i++)
        s = s + t[i];
    if(s == sum)
    {
        for(int i = 0; i < t.size(); i++)
            cout << t[i] << " -> ";
    }
}

int main()
{
    node* root = new node(5);int sum = 22;
    node* temp = root;
    temp -> left = new node(4);
    temp -> left -> left = new node(11);
    temp -> left -> left -> left = new node(7);
    temp -> left -> left -> right = new node(2);
    temp -> right = new node(8);
    temp -> right -> left = new node(13);
    temp -> right -> right = new node(14);
    temp -> right -> right -> right = new node(1);
    temp -> right -> right -> left = new node(5);
    check(root,sum);
}
