#include<bits/stdc++.h>
using namespace std;


void Print(int arr[], int n)
{
    for(int i = 0; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
}
int Max(int A[], int n){
    int max = INT_MIN;
    for (int i=0; i<n; i++){
        if (A[i] > max){
            max = A[i];
        }
    }
    return max;
}
 
void CountSort(int A[], int n){
    int max = Max(A, n);
    int* count = new int [max + 1];
 
    for (int i=0; i<max+1; i++){
        count[i] = 0;
    }
 
    for (int i=0; i<n; i++){
        count[A[i]]++;
    }
 
    int i = 0;
    int j = 0;
    while (j < max+1){
        if (count[j] > 0){
            A[i++] = j;
            count[j]--;
        } else {
            j++;
        }
    }
 
    delete [] count;
}
 
int main() {
 
    int arr[] = {2, 5, 8, 12, 3, 6, 7, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    Print(arr,n);
    CountSort(arr, n);
    cout << endl;
    Print(arr,n);
 
    return 0;
}