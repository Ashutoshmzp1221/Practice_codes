#include <iostream>
using namespace std;

void insertionSort(int arr[], int n);
void display(int arr[], int n);

int main() {
    int arr[] = { 4, 6, 3, 7, 1, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    display(arr, n);
    return 0;
}

void insertionSort(int arr[], int n) {
    int i, j, key;
    for(int i = 1; i < n; i++) {
        j = i - 1;
        key = arr[i];
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[j+1] = key;
    }
}

void display(int arr[], int n) {
    cout << "Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}