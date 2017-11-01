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
	int search(vector<int>& nums, int target)
	{
		int index = -1;
		for (int i = 0; i<nums.size(); i++)
		{
			if (nums[i] == target)
				index = i;
		}
		return index;
	}
};

int main()
{
	Solution s;
	vector<int> vec = {  };
	cout<< s.search(vec,7);

	system("pause");
	return 0;
}