class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        for (int i = num / 2; i <= num; ++i) {
            int n = i, rev = 0;
            while (n) rev = rev * 10 + n % 10, n /= 10;
            if (i + rev == num) return true;
        }
        return false;
    }
};