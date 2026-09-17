class Solution {
public:
    int reverse(int x) {
        int sum = 0, l; 
        while(x!=0){
            l = x%10; 
            x/=10; 
            if (sum > INT_MAX / 10 || (sum == INT_MAX / 10 && l > 7)) return 0;
            // Check for negative overflow
            if (sum < INT_MIN / 10 || (sum == INT_MIN / 10 && l < -8)) return 0;
            sum = sum* 10+l; 
        }
        return sum; 
    }
};