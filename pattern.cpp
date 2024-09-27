// C++ code for the above approach:

#include <bits/stdc++.h>
using namespace std;

// Using a 256 sized array of
// hash sets.
unordered_set<int> structured_text[256];

// Function to perform the hashing
void StringSearch(string st)
{
	// Structure the text. It will be
	// helpful in pattern searching
	for (int i = 0; i < st.length(); i++)

		// Insert every index to the
		// hash set using character ASCII.
		structured_text[st[i]].insert(i);
}

// Function to search the pattern
void pattern_search(string st, string pattern)
{
	StringSearch(st);

	// Queue contain the indices
	queue<int> q_indices;

	for (int ind : structured_text[pattern[0]])
		q_indices.push(ind);

	// Pattern length
	int pat_len = pattern.length();
	for (int i = 1; i < pat_len; i++) {
		char ch = pattern[i];
		int q_size = q_indices.size();

		// The queue contains the
		// number of occurrences of
		// the previous character.
		// Traverse the queue for
		// q_size times.
		// Check the next character of
		// the pattern found or not.
		while (q_size--) {
			int ind = q_indices.front();
			q_indices.pop();

			if (structured_text[ch].find(ind + 1)
				!= structured_text[ch].end())
				q_indices.push(ind + 1);
		}
	}
	cout << "Pattern found at indexes:";
	while (!q_indices.empty()) {

		// last_ind is the last index
		// of the pattern in the text
		int last_ind = q_indices.front();
		q_indices.pop();
		cout << " " << last_ind - (pat_len - 1);
	}
	cout << endl;
}

// Driver code
int main()
{
	// Passing the Text
	string text = "Welcome to Geeks for Geeks";
	string pattern = "Geeks";

	// Function call
	pattern_search(text, pattern);
	return 0;
}
