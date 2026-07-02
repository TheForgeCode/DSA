#include <bits/stdc++.h>
using namespace std;

/*
Problem 1: Valid Palindrome
LeetCode

Key Idea:
- Ignore non-alphanumeric characters.
- Convert both characters to lowercase.
- Compare from both ends using two pointers.

Example:
"A man, a plan, a canal: Panama"
-> "amanaplanacanalpanama"
-> palindrome

Time Complexity: O(n)
Space Complexity: O(1)

*/

class Solution {
public:
bool isPalindrome(string s) {
int l = 0;
int r = s.size() - 1;


    while(l < r) {
        while(l < r && !isalnum(s[l])) l++;
        while(l < r && !isalnum(s[r])) r--;

        if(tolower(s[l]) != tolower(s[r])) return false;

        l++;
        r--;
    }

    return true;
}


};

/*
Problem 2: Palindrome String using Recursion
Coding Ninjas

Key Idea:
- Compare first and last character.
- Move inside recursively.
- Base case: i >= n/2

Iterative version:
- Same logic using two pointers and a while loop.

Time Complexity: O(n)
Space Complexity: O(n) [Recursive Call Stack]
*/

bool helper(string& str, int i, int n) {
if(i >= n / 2) return true;

if(str[i] != str[n - i - 1]) return false;

return helper(str, i + 1, n);

}

bool isPalindrome(string& str) {
int i = 0;
int n = str.size();

return helper(str, i, n);


}

/*
Notes:

1. Iterative same idea:
   - left = 0
   - right = n - 1
   - compare str[left] and str[right]
   - left++
   - right--

2. Recursive idea:
   - compare outer characters first
   - then solve smaller substring

3. Important:
   - In recursion, always return the recursive call.
   - Otherwise the function may miss the final answer.

*/