class Solution {
    public int pivotIndex(int[] nums) {
        int n= nums.length;
        int total = 0; 
        int left = 0;  
        for(int x : nums) total+= x; 
        for(int i = 0; i<n; i++){
            if(left == total-left-nums[i]){
                return i; 
            
            }
            left += nums[i]; 
        }
        return -1; 
        
    }
}