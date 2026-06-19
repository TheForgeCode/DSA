#include <bits/stdc++.h>
using namespace std;


// Approach 1: Global vector container
// create one global container and push the result in this after each function call
// not useful as it retains values till the program is terminated so not suitable for multiple test cases in same program
// Time Complexity: O(n)
// Space Complexity: O(n) [includes recursive call stack space]

vector<string> st;

vector<string> printNTimesGlobal(int n) {
	if (n == 0) {
		return st;
	}
	st.push_back("Coding Ninjas");

	return printNTimesGlobal(n - 1);
}



// Approach 2: Helper function + local vector
// create vector locally and pass same vector to helper function
// better approach because vector gets recreated for every function call in main function
// safer for multiple test cases as no global state is used
// Time Complexity: O(n)
// Space Complexity: O(n) [includes recursive call stack space]


// st is pointer to vector
// use -> to access vector functions
// don't use &st inside recursion because st is already a pointer

void helper(int n, vector<string>* st) {
	if (n == 0) {
		return;
	}
	st->push_back("Coding Ninjas");

	helper(n - 1, st);
}


vector<string> printNTimesHelper(int n) {
	vector<string> st;

	// pass address of vector
	helper(n, &st);

	return st;
}