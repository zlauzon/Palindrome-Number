/**
* author: zachary lauzon
* date: 2022-07-28
*
* An alternate solution where we convert the passed palindrome to a string and use string's reverse iterators in a range-based loop
*
* stats:
*   Runtime: 20 ms, faster than 59.61% of C++ online submissions
*   Memory Usage: 6 MB, less than 11.56% of C++ online submissions
*/

class Solution {
public:
    bool isPalindrome(int x) {
        std::string tempString = to_string(x);
        std::string reverse = "";
        for (std::string::reverse_iterator rit = tempString.rbegin(); rit != tempString.rend(); ++rit)
            reverse += *rit;
        
        if (!tempString.compare(reverse)) {
            return true;
        } else {
            return false;
        }
    }
};
