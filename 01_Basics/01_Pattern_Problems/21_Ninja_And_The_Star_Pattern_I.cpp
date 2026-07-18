#include <bits/stdc++.h>
using namespace std;

// ==========================================================
// Hollow Square Pattern
// ==========================================================
//
// Pattern:
// Print a hollow square using '*'.
//
// Example (n = 5):
//
// * * * * *
// *       *
// *       *
// *       *
// * * * * *
//
// Total Rows    : n
// Total Columns : n


// ==========================================================
// Idea
// ==========================================================
//
// Print '*' only on the boundary of the square.
//
// Boundary consists of:
// • First row
// • Last row
// • First column
// • Last column
//
// Print spaces for all remaining positions.


// ==========================================================
// Algorithm
// ==========================================================
//
// Traverse every cell of the n × n grid.
//
// If the current cell lies on the boundary:
//
//     row == 0
//     OR
//     row == n - 1
//     OR
//     column == 0
//     OR
//     column == n - 1
//
// Print '*'.
//// Otherwise print spaces.


void hollowSquare(int n) {
    for (int row = 0; row < n; row++) {
        for (int column = 0; column < n; column++) {

            if (row == 0 ||
                row == n - 1 ||
                column == 0 ||
                column == n - 1) {

                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }

        cout << '\n';
    }
}


// ==========================================================
// Time Complexity
// ==========================================================
//
// O(n²)
//
// Every cell of the n × n grid is visited once.


// ==========================================================
// Space Complexity
// ==========================================================
//
// O(1)


// ==========================================================
// Key Observations
// ==========================================================
//
// • Total rows = n
// • Total columns = n
//
// • Only boundary cells contain '*'.
//
// • Interior cells contain spaces.
//
// • A cell is on the boundary if:
//
//     row == 0
//     OR
//     row == n - 1
//     OR
//     column == 0
//     OR
//     column == n - 1


// ==========================================================
// Pattern Used
// ==========================================================
//
// • Matrix traversal
// • Boundary checking
// • Row and column conditions


// ==========================================================
// Interview Observation
// ==========================================================
//
// Many pattern problems become much simpler by:
//
// • Thinking of the pattern as a grid.
// • Identifying the boundary conditions.
// • Printing based on (row, column) coordinates instead of
//   manually counting spaces or stars.