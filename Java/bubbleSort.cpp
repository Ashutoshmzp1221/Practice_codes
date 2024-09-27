#include <iostream>
#include <utility>
using namespace std;

void bubbleSort(int arr[], int n);
void display(int arr[], int n);

int main() {
    int arr[] = { 4, 6, 3, 7, 1, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    display(arr, n);
    return 0;
}

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void display(int arr[], int n) {
    cout << "Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}