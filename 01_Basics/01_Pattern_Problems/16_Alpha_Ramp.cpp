#include <iostream>
using namespace std;

void alphaRamp(int n) {
    for(int i = 1; i <= n; i++){
        char ch = 'A' + i - 1;
        for(int j = 1; j <= i; j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}


int main() {
    alphaRamp(5);
    
    return 0;
}