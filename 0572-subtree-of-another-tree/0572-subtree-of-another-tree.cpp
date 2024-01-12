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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL && subRoot!=NULL)
            return false;
            
        if(subRoot==NULL)
            return true;

        if(isEqual(root, subRoot)){
            return true;
        }
        return isSubtree(root->left, subRoot) 
            || isSubtree(root->right, subRoot);
    }

    bool isEqual(TreeNode* r1, TreeNode* r2) {
        if(r1==NULL && r2==NULL)
            return true;

        if((r1==NULL && r2!=NULL) || (r2==NULL && r1!=NULL))
            return false;
            
        return (r1->val == r2 ->val) 
            && isEqual(r1->left, r2->left)
            && isEqual(r1->right, r2->right);
    }
};