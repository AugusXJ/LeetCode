#include <vector>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <stack>
#include <string>

using namespace std;


class Solution 
{
public:
	bool judgeCircle(string moves) 
	{
		int horizontal=0, vertical = 0;
		for (char c : moves)
		{
			switch (c)
			{
			case 'R':
				horizontal++;
				break;
			case 'L':
				horizontal--;
				break;
			case 'U':
				vertical++;
				break;
			case 'D':
				vertical--;
				break;
			default:
				break;
			}
		}
		if (horizontal == 0 && vertical == 0)
			return true;
		else
			return false;
	}
};

int main()
{
	Solution s;
	cout << s.judgeCircle("UD");

	system("pause");
	return 0;
}