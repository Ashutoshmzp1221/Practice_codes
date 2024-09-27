#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s){
    int i = 0, j = s.length() - 1;
    while(i <= j){
        if(s[i++] != s[j--]) return false;
    }
    return true;
}

int main(){
    string s;
    cout << "Enter the string: " << endl;
    cin >> s;
    if(palindrome(s))   cout << "The string is palindrome" << endl;
    else    cout << "The string is not a palindrome" << endl;
}