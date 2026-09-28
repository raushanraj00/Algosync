class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(); 
        int m = nums2.size();

        vector<int> temp; 
        for(int i = 0 ; i<n; i++){
            temp.push_back(nums1[i]); 
        }
        for(int i = 0; i<m; i++){
            temp.push_back(nums2[i]); 
        }

        sort(temp.begin(), temp.end()); 
        int size = temp.size(); 
        int t = size; 
        int t1 = (size/2)-1 ; 
        
        if( t%2 == 1){
            return temp[t/2]; 
        }
        return (temp[t/2] + temp[t1])/2.0;

    }
};