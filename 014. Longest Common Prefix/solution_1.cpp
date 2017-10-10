#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if (strs.empty() == true)
			return "";
		size_t min_length = INT_MAX;
		for (auto it : strs)
			min_length = min(min_length, it.length());
		string predix = "";
		for (size_t t = 0; t != min_length; t++)
		{
			for (auto it = strs.begin()+1; it != strs.end(); it++)
			{
				if ((it-1)->at(t) != (it)->at(t))
					return predix;
			}
			predix.insert(predix.end(), strs[0].at(t));
		}
		return predix;
	}
};

int main()
{
	vector<string> s = { "abc","abd","" };
	Solution s1;
	cout<<s1.longestCommonPrefix(s)<< endl;
	system("pause");
	return 0;
}