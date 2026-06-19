#include <bits/stdc++.h>
using namespace std;


// Approach 1: Normal recursion
// create vector locally inside main function then use helper function to print x to 1 recursively
// Time Complexity: O(n)
// Space Complexity: O(n) [includes recursive call stack space]


// &v [Pass By Reference]

void helper1(int x, vector<int> &v) {
    if(x < 1) {
        return;
    }

    v.push_back(x);

    helper1(x - 1, v);
}


// Approach 2: Backtracking recursion
// recursion first reaches base condition, then inserts elements while returning
// backtracking means doing the work while coming back from recursive calls
// Time Complexity: O(n)
// Space Complexity: O(n) [includes recursive call stack space]

void helper2(int counter, int x, vector<int> &v) {
    if(counter > x) {
        return;
    }

    // recursion call first then store number after returning from sub recursive problem
    helper2(counter + 1, x, v);

    v.push_back(counter);
}


vector<int> printNos(int x) {
    vector<int> v;

    // Approach 1
    helper1(x, v);

    // Approach 2
    // helper2(1, x, v);

    return v;
}

// [Note]: backtracking usually needs pass by value so each recursive call keeps its own state