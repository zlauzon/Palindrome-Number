class Solution {
public:
    bool isPalindrome(int x) {
        bool flag = false;
        if (x < 0) return flag;
        int lastDigit;
        long long reverse = 0;
        auto num = x;
        while (num) {
            lastDigit = num % 10;
            reverse = (reverse * 10) + lastDigit;
            num /= 10;
        }
        flag = (reverse == x) ? true : false;
        return flag;
    }
};
