class Solution {
public:
     vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root)  return {};
        queue<TreeNode*> que;
        que.push(root);
        vector<vector<int>> ans;
        while(!que.empty())
        {
            vector<int> v;
            for(int i = que.size();i;i--)
            {
                TreeNode* curr = que.front();
                que.pop();
                v.push_back(curr->val);
                if(curr->left != NULL)
                    que.push(curr->left);
                if(curr->right != NULL)
                    que.push(curr->right);
            }
            ans.push_back(v);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
