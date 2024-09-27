#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int n);
int binarysearch(int arr[], int n, int num);

int main(){
    int n, num;
    cout << "Enter the number of the elements you want: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    display(arr , n);
    cout << "Enter the number you want to search: " << endl;
    cin >> num;

    cout << "The number is found and it's index is: " << binarysearch(arr, n, num);

}

int binarysearch(int arr[], int n, int num) {
    int st = 0, en = n;
    while(st <= en) {
        int mid = (st + en)/2;
        if(arr[mid] == num) {
            return mid;
        }
        else if(arr[mid] > num) {
            en=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return -1;
}

void display(int arr[], int n)
{
    cout << "The sorted array is: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}