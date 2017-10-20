#include <vector>
#include <stdlib.h>
#include <iostream>

using namespace std;
class Solution 
{
public:
	int strStr(string haystack, string needle) 
	{
		if (haystack.size() < needle.size()) return -1;
		if (needle.size() == 0) return 0;
		int k=-1;
		for (int i = 0; i < haystack.size()-needle.size()+1; i++)
		{
			if (haystack[i] == needle[0])
			{
				k = i;
				for (int j = 1; j < needle.size(); j++)
				{
					if (needle[j] != haystack[++i])
					{
						i = k;
						k = -1;
						break;
					}
				}
			}
			if (k != -1) return k;
		}
		return k;
	}
};

int main()
{
	Solution s;
	vector<int> nums = { 1,1,2,3,4 };
	cout << s.strStr("mississippi","is") << endl;
	system("pause");
	return 0;
}