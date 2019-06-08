/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        TreeNode* tempNode;
        if(d==1){
            tempNode = new TreeNode(v);
            tempNode->left = root;
            root = tempNode;
        }
        else if(d==2){
            tempNode = new TreeNode(v);
            if(root->left!=nullptr) tempNode->left = root->left;
            root->left = tempNode;
            tempNode = new TreeNode(v);
            if(root->right!=nullptr) tempNode->right = root->right;
            root->right = tempNode;     
        }
        else{
            if(root->left!=nullptr){
                root->left = addOneRow(root->left, v, d-1);
            }
            if(root->right!=nullptr){
                root->right = addOneRow(root->right, v, d-1);
            }
        }
        return root;
    }
};