#include <iostream>
using namespace std;

int main()
{
    int i, n, arr[20], large, pos;
    cout << "Enter the number of elements in array you want: " << endl;
    cin >> n;
    cout << "Enter the elements of array: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    large = arr[0];
    pos = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
            pos = i;
        }
    }
    cout << "Largest element is " << large << " at position " << pos << endl;
}