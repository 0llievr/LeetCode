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

//Traverse the Tree in order, saving nodes in a vector
//scan vector to make sure vector[i] > vector[i-1]

class Solution {
private: 
    vector<int> rtn;
public:
    
    void traverse(TreeNode* node){
        if(node->left != nullptr)
            traverse(node->left);
            
        rtn.push_back(node->val);
        
        if(node->right != nullptr)
            traverse(node->right);
    }
        
 
    
    bool isValidBST(TreeNode* root) {
        if(root != nullptr)
            traverse(root);
        
        for(int i = 1; i < rtn.size(); i++){
            if(rtn[i] <= rtn[i-1])
                return false;
        }
        
        return true;    
    }
};