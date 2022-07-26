/*
* author: zachary lauzon
* date: 2022-07-22
*/

class Solution {
public:
    bool isPalindrome(int x) {
        bool flag = false;
        if (x < 0) return flag; //disqualify all negative numbers
        int lastDigit;
        long long reverse = 0;
        auto num = x;
        while (num) {
            lastDigit = num % 10; //copy digit from the rear of the number
            reverse = (reverse * 10) + lastDigit; //add copied digit to the front of the number
            num /= 10; //remove copied digit from working number
        }
        flag = (reverse == x) ? true : false; //if our reverse number equals the passed number it is a palindrome
        return flag;
    }
};
