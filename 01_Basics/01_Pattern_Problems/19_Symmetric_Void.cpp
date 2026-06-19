#include <iostream>
using namespace std;

void symmetry(int n) {
    int spaces = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << "* ";
        }

        for(int j=0; j<spaces; j++){
            cout << "  ";
        }

        for(int j=0; j<n-i; j++){
            cout << "* ";
        }
        spaces += 2;
        cout << endl;
    }
    spaces -= 2;

    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << "* ";
        }

        for(int j=0; j<spaces; j++){
            cout << "  ";
        }

        for(int j=0; j<i+1; j++){
            cout << "* ";
        }
        spaces -= 2;
        cout << endl;
    }
}

int main() {
    symmetry(5);
    
    return 0;
}