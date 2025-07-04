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
   void inorderTraversal(TreeNode* root, vector<int> &ans){
       if (root == nullptr) {
           return;
       }
       inorderTraversal(root->left, ans);
       ans.push_back(root->val);
       inorderTraversal(root->right, ans);
   }
   
   bool isSameTree(TreeNode* p, TreeNode* q) {
       vector<int> ans1;
       vector<int> ans2;
       inorderTraversal(p, ans1);
       inorderTraversal(q, ans2);
       
       return ans1 == ans2;
   }
};
