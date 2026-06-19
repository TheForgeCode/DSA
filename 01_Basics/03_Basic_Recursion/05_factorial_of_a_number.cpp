#include <bits/stdc++.h>
using namespace std;

/*
    Problem: Factorial of a Number

    Key Idea:
    - For N > 20, factorial exceeds the range of long long.
    - Store the number digit by digit in a vector.
    - Store digits in reverse order.

    Example:
    120 -> [0, 2, 1]

    We multiply the current number by (N-1), (N-2), ... , 2
    while handling carry manually.
*/


void helper(int n, vector<int> &product) {
    if (n == 1) return;

    int carry = 0;

    for (int i = 0; i < product.size(); i++) {
        carry = product[i] * n + carry;

        product[i] = carry % 10;
        carry /= 10;
    }

    // Store remaining carry digits
    while (carry != 0) {
        product.push_back(carry % 10);
        carry /= 10;
    }

    helper(n - 1, product);
}


void factorial(int n) {
    if (n == 1) {
        cout << 1 << endl;
        return;
    }

    vector<int> product;

    // Store digits of n in reverse order
    int num = n;
    while (num > 0) {
        product.push_back(num % 10);
        num /= 10;
    }

    helper(n - 1, product);

    // Print answer
    for (auto it = product.end(); it != product.begin();) {
        --it;
        cout << *it;
    }

    cout << endl;
}


/*
    Notes:

    1. Why not use long long?
       - 20! fits in long long.
       - 21! overflows long long.
       - N can be up to 100.

    2. Why use a vector?
       - Factorial can have hundreds of digits.
       - Vector stores each digit separately.

    3. Why store digits in reverse order?
       - Easier carry handling.
       - Start multiplication from the least significant digit.

    4. Carry handling:
       Example:
       9 × 25 = 225

       Store:
       digit = 225 % 10 = 5
       carry = 225 / 10 = 22

       Carry is used in the next digit.

    5. Complexity:
       Time  : O(N × Digits)
       Space : O(Digits) + O(N) recursion stack

    6. Important learning:
       When numbers become too large for built-in data types,
       store them digit by digit and simulate arithmetic manually.
*/