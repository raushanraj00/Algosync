class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length; 
        int total_sum = (n*(n+1))/2; 
        int total = 0; 

        for(int x : nums) total += x; 
        return total_sum-total;
    }
}