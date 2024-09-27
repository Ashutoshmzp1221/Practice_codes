#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int d;
    cin >> d;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int temp[n];
    int j = 0;
    for(int i = d; i < n; i++){
        temp[j] = arr[i];
        j++;
    }
    
    for(int i = 0; i < d; i--) {
       temp[j] = arr[i]; 
       j++;
    }
    
    for(int i = 0; i < n; i++)
        arr[i] = temp[i];
    
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
