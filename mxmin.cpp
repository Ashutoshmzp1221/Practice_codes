#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Ashutosh Dwivedi" << "\n 21BCS2617" << endl;
    cout << "Enter the size of the array " << endl;
    cin >> n;
    cout << "Enter the elements of the array: " << endl;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    cout << "The greatest number is " << v[n - 1] << " and the smallest number is " << v[0];
}