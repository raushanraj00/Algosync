/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    public: 
     int maxPathSum(TreeNode* root) {
        int maxm = INT_MIN; 
        maxpathdown(root, maxm); 
        return maxm; 

    }
     int maxpathdown(TreeNode* node, int &maxm){
        if(node == NULL) return 0; 
        int left = max(0,maxpathdown(node-> left, maxm)); 
        int right = max(0, maxpathdown(node-> right, maxm)); 
        maxm = max(maxm, left+right + node-> val); 
        return max(left , right) + node-> val; 

    }
};