#include<bits/stdc++.h>
using namespace std;

void sum(vector<int> v)
{
    int n;
    cout << "Enter the number of numbers you want to add: " << endl;
    cin >> n;
    v.resize(n);
    cout << "Enter the elements: "<<endl;
    for(int i = 0; i < n; i++)
        cin >> v[i];
    int res = accumulate(v.begin(),v.end(),0);
    cout <<"The sum of the numbers are: "<< res<< endl;
}

void sub(vector<int> v)
{
    int n;
    cout << "Enter the number of the elements: " << endl;
    cin >> n;
    v.resize(n);
    cout << "Enter the elements: "<<endl;
    for(int i = 0; i < n; i++)
        cin >> v[i];
    int temp = abs(v[1] - v[0]);
    for(int i = 2; i < n - 1; i++)
    {
        temp = abs(v[i] - temp); 
    }
    cout <<"The substraction of the numbers are: "<< temp<< endl;
}

void mul(vector<int> v)
{
    int n;
    cout << "Enter the number of the elements: " << endl;
    cin >> n; 
    v.resize(n);
    cout << "Enter the elements: "<<endl;
    for(int i = 0; i < n; i++)
        cin >> v[i];
    int temp = 1;
    for(int i = 0; i < n; i++)
        temp *= v[i];
    cout <<"The multiplication of the numbers are: "<< temp<< endl;
}

void div(vector<int> v)
{
    int n;
    cout << "Enter the number of the elements: " << endl;
    cin >> n;
    v.resize(n);
    cout << "Enter the elements: "<<endl;
    for(int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(),v.end(),greater<int>());
    int temp = 1;
    for(int i = 0; i < n; i++)
    {
        temp = v[i] / temp;
    }
    cout <<"The division of the numbers are: "<< temp<< endl;
}

int main()
{
    char n;
    do
    {
        cout << "Enter your choice" << endl;
        cout << "Enter + for addition"<< endl;
        cout << "Enter - for addition"<< endl;
        cout << "Enter * for addition"<< endl;
        cout << "Enter / for addition"<< endl;
        cout << "Enter 0 to exit" << endl;
        cin >> n;
        vector<int> v;
        switch (n)
        {
            case '+':
                sum(v);
                break;
            case '-':
                sub(v);
                break;
            case '*':
                mul(v);
                break;
            case '/':
                div(v);
                break;
            default:
                cout << "Invalid ! enter a valid choice;" << endl;
        }
    } while (n != '0');
    
}