class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size(); 
        int total = 0; 
        int left = 0; 
        for(int i = 0; i<n; i++) total += nums[i] ; 

        for(int i = 0; i<n; i++){
            if(left == total-left-nums[i]){
                return i; 
            }
            left +=nums[i]; 
        }
        return -1; 
    }
};