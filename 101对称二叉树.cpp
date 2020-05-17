class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return ismirror(root,root);
    }
    
    bool ismirror(TreeNode* p,TreeNode* q){
        if(!p&&!q)//��ΪNULL
            return true;
        if(!p||!q)//��һ��ΪNULL
            return false;
        if(p->val==q->val)
            return ismirror(p->left,q->right)&&ismirror(p->right,q->left);
        return false;
    }
};
