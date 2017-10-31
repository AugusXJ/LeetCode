#include <vector>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <stack>

using namespace std;

class Solution 
{
public:
	int longestValidParentheses(string s) 
	{
		int size = s.size();
		//��һ��ջ��ȡ��ƥ���ַ�������
		stack<int> m_stack;
		for (int i = 0; i < size; i++)
		{
			if (!m_stack.empty() && s[i] == ')' && s[m_stack.top()] == '(')
				m_stack.pop();
			else
				m_stack.push(i);
		}
		//��ȡÿ������ƥ���ַ�֮���ַ��������������ֵ
		if (m_stack.empty())
			return size;
		else
		{
			int a = size;
			int length = 0;
			while (!m_stack.empty())
			{
				int b = m_stack.top();
				m_stack.pop();
				length = max(a - b - 1,length);
				a = b;
			}
			length = max(length, a);
			return length;
		}
	}
};

int main()
{
	Solution s;
	string s1 = ")()())()()(";
	cout<< s.longestValidParentheses(s1);

	system("pause");
	return 0;
}