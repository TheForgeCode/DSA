#include <bits/stdc++.h>
using namespace std;

// ==========================================================
// Hollow Diamond Pattern
// ==========================================================
//
// Pattern:
// Print a hollow diamond using '*'.
//
// Example (n = 5):
//
//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *
//
// Total Rows    : 2 * n - 1
// Total Columns : 2 * n - 1


// ==========================================================
// Idea
// ==========================================================
//
// Treat the pattern as:
//
// 1. Upper Half
// 2. Lower Half
//
// For every row:
// Print '*' only at the two boundary positions.
// Print spaces everywhere else.
//
// The lower half mirrors the upper half.


// ==========================================================
// Algorithm
// ==========================================================
//
// Upper Half:
//
// Left Star  = n - row - 1
// Right Star = n + row - 1
//
// Lower Half:
//
// Mirror the upper half using:
//
// mirroredRow = (2 * n - 2) - row
//
// Then compute:
//
// Left Star  = n - mirroredRow - 1
// Right Star = n + mirroredRow - 1
//
// Print '*' at boundary positions.
// Print spaces otherwise.


void hollowDiamond(int n) {
    for (int row = 0; row < 2 * n - 1; row++) {

        if (row < n) {

            for (int column = 0; column < 2 * n - 1; column++) {

                if (column == n - row - 1 ||
                    column == n + row - 1) {
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
        }
        else {

            int mirroredRow = (2 * n - 2) - row;

            for (int column = 0; column < 2 * n - 1; column++) {

                if (column == n - mirroredRow - 1 ||
                    column == n + mirroredRow - 1) {
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
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
// There are (2n - 1) rows.
// Each row prints (2n - 1) columns.


// ==========================================================
// Space Complexity
// ==========================================================
//
// O(1)


// ==========================================================
// Key Observations
// ==========================================================
//
// Total rows = 2n - 1
//
// Upper and lower halves are mirror images.
//
// Only two positions contain '*' in every row.
//
// Lower half is obtained by mirroring the row index:
//
//   mirroredRow = (2 * n - 2) - row
//
// Star Positions:
//
//   Left  = n - currentRow - 1
//   Right = n + currentRow - 1
//
// Everything between the two stars remains hollow.


// ==========================================================
// Pattern Used
// ==========================================================
//
// Symmetry
// Mirroring
// Coordinate (row, column) based printing
// Boundary condition checking


// ==========================================================
// Interview Observation
// ==========================================================
//
// Many pattern problems become simpler by:
//
// Finding the star positions mathematically.
// Printing based on coordinates instead of counting spaces.
// Reusing the upper-half logic by mirroring the row index.