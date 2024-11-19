class Solution {
public:
    int reverseNumber(int n) {
        int rev_num = 0;
        while(n>0){
            int digit = n % 10;
            rev_num = rev_num * 10 + digit;
            n = n/10;
        }
        return rev_num;
    }
    bool isPalindrome(int n) {
        int reverse_number = reverseNumber(n);
        return (reverse_number == n);

    }
};