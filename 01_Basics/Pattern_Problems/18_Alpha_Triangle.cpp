#include <iostream>
using namespace std;

void alphaTriangle(int n) {
    for(int i = 0; i < n; i++){
        char ch = 'A' + n-1;
        for(int j = 0; j<i+1; j++){
            cout << ch << " ";
            ch--;
        }

        for(int j = 0; j<n-i-1; j++){
            cout << "  ";
        }
        cout << endl;
    }
}

int main() {
    alphaTriangle(5);
    
    return 0;
}