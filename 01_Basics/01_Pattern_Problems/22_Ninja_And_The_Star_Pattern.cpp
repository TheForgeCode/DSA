/*
The grid size is fixed at (2*n - 1) rows and columns.
For each cell, compute its distance from the top, left, bottom, and right edges.
Use the minimum of those distances to determine the current layer.
Print n minus that minimum distance.
*/

#include <iostream>
using namespace std;

void getNumberPattern(int n) {
    for(int i = 0; i<2*n-1; i++){
        for(int j = 0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int bottom = (2*n - 2) - i;
            int right = (2*n - 2) - j;

            cout << n - min(min(top, bottom), min(left, right));
        }
        cout << endl;
    }
}

int main() {
    getNumberPattern(5);

    return 0;
}