#include<iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string" << endl;
    cin >> str;
    int n = str.length() - 1;
    int i = 0;
    while(i <= n)
    {
        swap(str[i++],str[n--]);
        
    }
    int ind;
    cout << "Enter the location of the character you want";
    cin >> ind;
    cout << "The reversed string :" << str << endl;
    cout << "The char at the given location: " << str[ind];
}