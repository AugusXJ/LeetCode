#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;


//Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution
{
public:
    int kthSmallest(TreeNode* root, int k)
    {
        int c = countNum(root->left);
        if(c >= k)
            return kthSmallest(root->left, k);
        else if(c < k-1)
            return kthSmallest(root->right, k-c-1);
        return root->val;
    }
    int countNum(TreeNode* root)
    {
        int num = 0;
        if(root)
            num += 1 + countNum(root->left) + countNum(root->right);
        return num;
    }
};

int main()
{
    Solution s1;
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(1);root->left->right = new TreeNode(2);
    root->right = new TreeNode(4);
    cout<<s1.kthSmallest(root, 3)<<endl;
    system("pause");
}
