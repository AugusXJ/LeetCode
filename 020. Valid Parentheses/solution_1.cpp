class Solution {
public:
	bool isValid(string s) 
	{
		stack<char> stack;
		for (auto c : s)
		{
			switch (c)
			{
			case '(':
			case '[':
			case '{':
				stack.push(c);
				break;
			case ')':
				if (stack.empty()|| stack.top() != '(' ) return false; stack.pop();
				break;
			case ']':
				if (stack.empty() || stack.top() != '[') return false; stack.pop();
				break;
			case '}':
				if (stack.empty() || stack.top() != '{') return false; stack.pop();
				break;
			}
		}
		if (stack.empty()) return true;
		else return false;
	}
};