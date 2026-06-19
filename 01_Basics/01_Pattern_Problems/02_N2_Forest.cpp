#include <iostream>
using namespace std;

void nforest(int n) {
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    nforest(5);

    return 0;
}