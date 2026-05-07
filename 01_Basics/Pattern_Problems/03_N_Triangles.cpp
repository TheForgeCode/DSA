#include <iostream>
using namespace std;

void nTriangle(int n) {
	for(int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

int main() {
    nTriangle(5);

    return 0;
}