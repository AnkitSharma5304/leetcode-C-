// Let's walk through how the maxDepth function works step by step on the given binary tree:

// markdown
// Copy code
//        1
//       / \
//      2   3
//     / \
//    4   5
// Step 1: Start at the Root Node (1)
// We start by calling maxDepth(root) where root points to the node with value 1.
// Since root is not nullptr, we move on to calculate the depth of the left and right subtrees of node 1.
// Step 2: Calculate Depth of the Left Subtree of Node 1
// We recursively call maxDepth(root->left) where root->left is the node with value 2.
// Since node 2 is not nullptr, we again move on to calculate the depth of its left and right subtrees.
// Step 3: Calculate Depth of the Left Subtree of Node 2
// We recursively call maxDepth(root->left->left) where root->left->left is the node with value 4.
// Since node 4 is a leaf node (it has no children), both root->left->left->left and root->left->left->right are nullptr.
// Step 3.1: Base Case for Node 4
// We call maxDepth(root->left->left->left), which is maxDepth(nullptr). This returns 0 because root is nullptr.
// We call maxDepth(root->left->left->right), which is also maxDepth(nullptr). This also returns 0.
// Now, the depth at node 4 is calculated as 1 + max(0, 0) = 1. This 1 accounts for the node 4 itself.
// Step 4: Calculate Depth of the Right Subtree of Node 2
// We recursively call maxDepth(root->left->right) where root->left->right is the node with value 5.
// Similar to node 4, node 5 is also a leaf node, so both its left and right children are nullptr.
// Step 4.1: Base Case for Node 5
// We call maxDepth(root->left->right->left), which is maxDepth(nullptr). This returns 0.
// We call maxDepth(root->left->right->right), which is also maxDepth(nullptr). This also returns 0.
// Now, the depth at node 5 is calculated as 1 + max(0, 0) = 1. This 1 accounts for the node 5 itself.
// Step 5: Calculate the Depth at Node 2
// We now have the depths of the left and right subtrees of node 2:
// Left subtree (node 4) depth is 1.
// Right subtree (node 5) depth is 1.
// The depth at node 2 is calculated as 1 + max(1, 1) = 2. This 2 accounts for node 2 and the longest path to its deepest child.
// Step 6: Calculate Depth of the Right Subtree of Node 1
// We recursively call maxDepth(root->right) where root->right is the node with value 3.
// Since node 3 is a leaf node (it has no children), both its left and right children are nullptr.
// Step 6.1: Base Case for Node 3
// We call maxDepth(root->right->left), which is maxDepth(nullptr). This returns 0.
// We call maxDepth(root->right->right), which is also maxDepth(nullptr). This also returns 0.
// Now, the depth at node 3 is calculated as 1 + max(0, 0) = 1. This 1 accounts for the node 3 itself.
// Step 7: Calculate the Maximum Depth at the Root Node (1)
// We now have the depths of the left and right subtrees of node 1:
// Left subtree (rooted at node 2) depth is 2.
// Right subtree (rooted at node 3) depth is 1.
// The depth at the root node 1 is calculated as 1 + max(2, 1) = 3. This 3 accounts for the root node 1 and the longest path to its deepest leaf, which is node 4 or node 5.
// Final Result
// The maximum depth of the tree is 3, which is the final result returned by the maxDepth function when called on the root node (1). The longest path from the root to a leaf node is either 1 -> 2 -> 4 or 1 -> 2 -> 5, both of which have a depth of 3.
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
    int maxDepth(TreeNode* root) {
        if(root==0) return 0;
        int LeftHeight=maxDepth(root->left);
        int RightHeight=maxDepth(root->right);

        return 1+max(LeftHeight , RightHeight);
    }
};