#include <iostream>
using namespace std;

void pattern(int n){
    for(int i = 0; i < 2*n - 1; i++) {
        if(i < n) {
            for(int j = 0; j < 2*n -1; j++) {
                if (j == n - i - 1 || j == n + i - 1) cout << "* ";
                else cout << "  ";
            }
            cout << endl;
        }
        else{
            int row = (2*n - 2) - i;
            for(int j = 0; j < 2*n -1; j++) {
                if (j == n - row - 1 || j == n + row - 1) cout << "* ";
                else cout << "  ";
            }
            cout << endl;
        }
    }
}

int main(){
    pattern(15);
    return 0;
}