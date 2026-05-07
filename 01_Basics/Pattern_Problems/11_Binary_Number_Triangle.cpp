#include <iostream>
using namespace std;

void nBinaryTriangle(int n) {
    for(int i = 1; i <= n; i++){
        bool flag = i%2;
        for(int j = 1; j <= i; j++){
            cout << (int)flag << " ";
            flag = !flag;
        }
        cout << endl;
    }
}

int main() {
    nBinaryTriangle(5);
    
    return 0;
}