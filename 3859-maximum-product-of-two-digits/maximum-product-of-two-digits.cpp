class Solution {
public:
    int maxProduct(int n) {
        int x1 = -1, x2 = -1; 

        while(n!=0){
            int ans = n % 10 ; 
            if(x1<= ans){
                x2 = x1; 
                x1 = ans; 
            }
            else if(x2 <ans){
                x2 = ans; 
            }
            n/=10; 
        }
        return x1 * x2; 
    }
};