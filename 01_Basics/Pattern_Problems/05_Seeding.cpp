#include <iostream>
using namespace std;

void seeding(int n) {
	for(int i = 0; i < n; i++){
        for(int j = 1; j <= n - i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    seeding(5);

    return 0;
}