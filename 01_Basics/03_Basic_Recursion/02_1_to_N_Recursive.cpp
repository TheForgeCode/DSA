#include <bits/stdc++.h>
using namespace std;


// Approach: normal recursion
// create vector locally inside main function then use helper function to print 1 to n using counter recursively
// Time Complexity: O(n)
// Space Complexity: O(n) [includes recursive call stack space]


// &v means reference to original vector, we work on the same original vector [Pass By Reference]

void helper1(int counter, int x, vector<int> &v) {
    if(counter > x) {
        return;
    }
    v.push_back(counter);

    helper1(counter + 1, x, v);
}




// Approach 2: Backtracking recursion
// recursion first reaches base condition, then inserts elements while returning
// backtracking means doing the work while coming back from recursive calls
// Time Complexity: O(n)
// Space Complexity: O(n) [includes recursive call stack space]

void helper2(int counter, int x, vector<int> &v) {
    if(counter < 1) {
        return;
    }

    // recursion call first then store number while after returning from sub recursive problem
    helper2(counter - 1, x, v);

    v.push_back(counter);
}




vector<int> printNos(int x) {
    vector<int> v;

    // Approach 1
    helper1(1, x, v);

    // Approach 2
    // helper2(x, x, v);

    return v;
}

// [Note] : backtracking usually needs pass by value so each recursive call keeps its own state