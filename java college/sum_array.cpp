#include<bits/stdc++.h>
using namespace std;

int sum(vector<int> v, int temp)
{
    for(int i = 0; i < v.size(); i++)
    {
        temp += v[i];
    }
    return temp;
}

int main(){
    cout << "Enter the size of the array: " << endl;
    int n;
    cin >> n;
    vector<int> v(n);
    cout << "Enter the element of the array: "<< endl;
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }
    int temp = 0;
    cout << "The sum of the elements of the array is: " << sum(v,temp) << endl;
}