#include <vector>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <stack>
#include <string>

using namespace std;



//* Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution 
{
public:
	TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) 
	{
		TreeNode* t3 = nullptr;
		merge(t1, t2, t3);
		return t3;
	}
	void merge(TreeNode* t1, TreeNode *t2, TreeNode *&t3)
	{
		if (t1 == nullptr && t2 == nullptr)
			return;
		else if (t1 == nullptr)
			t1 = new TreeNode(0);
		else if (t2 == nullptr)
			t2 = new TreeNode(0);
		t3 = new TreeNode(t1->val + t2->val);
		merge(t1->left, t2->left, t3->left);
		merge(t1->right, t2->right, t3->right);
	}
};

int main()
{
	Solution s;
	TreeNode* t1 = new TreeNode(1);
	t1->left = new TreeNode(3); t1->left->left = new TreeNode(5);
	t1->right = new TreeNode(2);

	TreeNode* t2 = new TreeNode(2);
	t2->left = new TreeNode(1); t2->right = new TreeNode(3);
	t2->left->right = new TreeNode(4); t2->right->right = new TreeNode(7);
	TreeNode* t3 = s.mergeTrees(t1, t2);

	system("pause");
	return 0;
}