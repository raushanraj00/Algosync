class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        // using counting sort
        int count[100001] = {0}; 

        for(int x : nums ) count[x + 50000] ++; 

        int idx = 0;
        for(int i = 0; i<= 100000; i++ ){
            while(count[i] -- > 0 ){
                nums[idx++] = i - 50000;
            }
        }
            return nums; 
    }
};