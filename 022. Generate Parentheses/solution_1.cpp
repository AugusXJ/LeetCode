#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <iostream>
#include <memory>
#include <string>
#include <stack>
using namespace std;


class ListNode
{
public:
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};
class Solution 
{
public:
	vector<string> generateParenthesis(int n) 
	{
		vector<string> result;
		string s = "";
		addChar(result, s, 3, 0);
		return result;
	}
	void addChar(vector<string> &result,string s, int n, int m)
	{
		if (n == 0 && m == 0)
			result.push_back(s);
		if (n > 0) addChar(result, s + '(', n - 1, m + 1);
		if (m > 0) addChar(result, s + ')', n, m - 1);
		return;
	}
};

int main()
{
	Solution s1;
	vector<string> result = s1.generateParenthesis(1);
	for (auto s : result)
		cout << s << endl;
	

	system("pause");
}