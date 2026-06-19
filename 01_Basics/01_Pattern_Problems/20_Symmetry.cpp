#include <iostream>
using namespace std;

void symmetry(int n) {
    int stars = 1;
    int spaces = 2*n - 2;

    for(int i = 0; i<2*n-1; i++){
        for(int p = 0; p<stars; p++){
            cout << "* ";
        }
        for(int q = 0; q<spaces; q++){
            cout << "  ";
        }
        for(int r = 0; r<stars; r++){
            cout << "* ";
        }
        cout << endl;

        (stars < n && i<n) ? stars +=1 : stars -=1;
        (spaces > 0 && i<n) ? spaces -=2 : spaces +=2;
    }
}

int main() {
    symmetry(5);

    return 0;
}