#include <iostream>
using namespace std;

void nLetterTriangle(int n) {
    for(int i = 1; i <= n; i++){
        for(char ch = 'A'; ch <= 'A' + n - i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main() {
    nLetterTriangle(5);
    
    return 0;
}