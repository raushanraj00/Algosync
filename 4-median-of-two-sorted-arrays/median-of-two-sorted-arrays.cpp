class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(); 
        int m = nums2.size();

        int temp[n+m];  
        for(int i = 0; i<n; i++){
            temp[i]= nums1[i]; 
        }
        for(int i = 0; i<m; i++){
            temp[n+i] = nums2[i]; 
        }
        sort(temp, temp + n+m);
        int size = sizeof(temp) / sizeof(temp[0]); 
        int t = size, t1 = (size/2)-1; 
        if( t%2 == 1){
            return temp[t/2]; 
        }
        return (temp[t/2] + temp[t1])/2.0;

    }
};