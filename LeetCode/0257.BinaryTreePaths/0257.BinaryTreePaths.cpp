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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ret{};
        vector<string> child_string;
        if(root==NULL) return ret;
        string current = std::to_string(root->val);
        if(root->left==NULL&&root->right==NULL){
            ret.push_back(current);
            return ret;
        }
        if(root->left!=NULL){
            child_string = binaryTreePaths(root->left);
            for(auto it=child_string.begin();it!=child_string.end();++it){
                ret.push_back(current+"->"+*it);
            }
        }
        if (root->right!=NULL){
            child_string = binaryTreePaths(root->right);
            for(auto it=child_string.begin();it!=child_string.end();++it){
                ret.push_back(current+"->"+*it);
            }
        }
        return ret;
    }
};


int any = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	return 0;
}();