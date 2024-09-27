#include <bits/stdc++.h>
using namespace std;

int count(string str, int m) {
	int c = 0; 
	for(int i = 0; i < m; i++) {
		if(str[i] == '#') {
			c++;
		}
	}
	return c;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		vector<int> v;
		string str;
		for(int i = 0; i < n; i++) {
			cin >> str;
			int c = count(str, m);
			v.push_back(c);
		}
		sort(v.begin(), v.end());
		cout << v.back() << endl;
	}
}