class Solution {
public:
    TreeNode* is_ri(TreeNode *root, TreeNode *p, TreeNode *q) {
        if ((root->val - p->val) * (root->val - q->val) <= 0) return root;
        if ((root->val > p->val) && (root->val > q->val)) return is_ri(root->left, p, q);
        else return is_ri(root->right, p, q);
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) return NULL;
        if (p->val == q->val) return p;
        return is_ri(root, p, q);
    }
};
