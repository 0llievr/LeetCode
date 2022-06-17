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
private:
    vector<int> rtn;
public:
    void Traversal(TreeNode* node){
        
        //traverse left
        if(node->left != nullptr){
            Traversal(node->left);
        }
        
        //push back left most
        rtn.push_back(node->val);

        //traverse right
        if(node->right != nullptr){
            Traversal(node->right);
        }
        
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        if(root != nullptr){
            Traversal(root);
        }
        return rtn;
    }
};