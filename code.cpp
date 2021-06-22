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
    vector<string>A;
    void path(TreeNode *root,string s)
    {
        if(root->left==NULL &&root->right==NULL)
        {
            s=s+to_string(root->val);
            A.push_back(s);
        }
        else
        {
            s=s+to_string(root->val)+"->";
            
            if(root->left){path(root->left,s);}
            if(root->right){path(root->right,s);}
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string s;
        path(root,s);
        return A;
    }
};
