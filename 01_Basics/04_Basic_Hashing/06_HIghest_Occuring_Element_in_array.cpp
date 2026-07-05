#include <bits/stdc++.h>
using namespace std;

// Pattern: Hashing
// Concept: Frequency Counting

// Approach:
// Count the frequency of every element.
// Traverse the frequency array.
// Return the element having the maximum frequency.
//
// Time Complexity: O(n + Range)
// Space Complexity: O(Range)

int main() {
    vector<int> arr = {1, 2, 2, 3, 1, 2, 4, 1, 1};
    int maxi = *max_element(arr.begin(), arr.end());
    vector<int> freq(maxi + 1, 0);

    for(auto it : arr) {
        freq[it]++;
    }

    int maxFreq = 0;
    int ans = -1;

    for(int i = 0; i < freq.size(); i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            ans = i;
        }
    }

    cout << "Highest Occurring Element: " << ans << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}


// [Note]:
// Frequency Array:
//
// Use when the range of values is small
// and known beforehand.


// [Observation]:
// Traverse the frequency array and
// keep track of the maximum frequency.


// [Extension]:
// If the array contains negative numbers
// or a very large range of values,
// prefer unordered_map.