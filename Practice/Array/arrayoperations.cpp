#include<iostream>
using namespace std;

void insert(int index, int key)
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Array before insertion: " << endl;
    for(int i = 0; i <n; i++)
        cout << arr[i] << " ";
    for(int i = n-1; i>=index ; i--)
    {
        arr[i+1] = arr[i];
    }n++;
    arr[index] = key;
    
    cout << endl;
    for(int i = 0; i <n; i++)
        cout << arr[i] << " ";
}
void create(int size, int arr[])
{
    for(int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "Array before any operation: "<< endl;
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

void delet(int index)
{
    int size;
    cin >> size;
    int arr[size];
    create(size,arr);
    for(int i = index; i < size; i++)
        arr[i] = arr[i+1];
    size--;
    cout << "After deletion: "<< endl;
    for(int i = 0; i < size; i++)
        cout << arr[i] << endl;
}

int main()
{
    // insert(4,5);
    delet(4);
}