class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0){
            return false;
        }

        int rev = 0;
        int num = x;


        while (num != 0) {
            int rem = num % 10;
            if ((rev > INT_MAX/10) || (rev < INT_MIN/10)) {
                return 0;
            }
            rev = rev * 10 + rem;
            num = num / 10;
        }

        return rev ==x;
    }
};