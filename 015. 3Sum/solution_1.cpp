#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		vector<vector<int>> results;
		sort(nums.begin(), nums.end());
		for (auto it = nums.begin(); it != nums.end(); it++)
		{
			if (it != nums.begin() && *it == *(it - 1))
				continue;
			for (auto it2 = nums.begin(); it2 != nums.end()-1; it2++)
			{
				if (!diff(*it,*it2) || it2 != nums.begin() && *it2 == *(it2 - 1))
					continue;
				for (auto it3 = it2+1; it3 != nums.end(); it3++)
				{
					if (!diff(*it, *it3) || it3 != it2+1 && *it3 == *(it3 - 1))
						continue;
					if (*it + *it2 + *it3 == 0)
						results.push_back(vector<int>{*it, *it2, *it3});
				}
			}
		}
		//寻找3个0的情况
		size_t num = count(nums.begin(), nums.end(), 0);
		if (num >= 3)
			results.push_back(vector<int>{0, 0, 0});
		return results;
	}
private:
	bool diff(int a, int b)
	{
		if (a >= 0 && b < 0 || a < 0 && b >= 0)
			return true;
		else
			return false;
	}
};

int main()
{
	Solution s1;
	vector<int> nums = { -1,0,1,2,-1,-4 };
	auto result = s1.threeSum(nums);
	for (auto i : result)
	{
		for (auto j : i)
			cout << j << "\t";
		cout << endl;
	}
	system("pause");
	return 0;
}