class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
		vector<string> res;
		if (root == nullptr) return res;

		binaryTreePaths(root, res, "");
		return res;
	}

	void binaryTreePaths(TreeNode * root, vector<string> & res, string path) {
		path += to_string(root->val);

		if (root->left == nullptr && root->right == nullptr) {
			res.push_back(path);
			return;
		}

		if (root->left) binaryTreePaths(root->left, res, path + "->");
		if (root->right) binaryTreePaths(root->right, res, path + "->");
	}
};
