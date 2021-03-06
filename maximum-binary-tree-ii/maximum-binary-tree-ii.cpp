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
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
        TreeNode*node = new TreeNode(val);
         if(root == NULL){
            return node;
         }
        
        if(root->val <= val){
            
            node->left = root;
            return node;
        }
        
         TreeNode*ans1 = insertIntoMaxTree(root->right , val);
      
            root->right = ans1;
            return root;
        
    }
};