#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,1,3,4,5};
    int k = 3;
    unordered_set<int> st;

    for(int i = 0; i < v.size(); i++) {
        st.insert(v[i]);
    }
    int count = 0;
    for(auto it : st) {
        int left = k + it;
        if(st.find(left) != st.end()) {
            count++;
        }
    }
    // return count;
    cout << count;
}