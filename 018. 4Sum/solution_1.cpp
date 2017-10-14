#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target)
	{
		vector<vector<int>> results;
		if (nums.size() < 4) return results;
		sort(nums.begin(), nums.end());
		for (auto it = nums.begin(); it != nums.end() - 3;it++)
		{
			if (*it + *(it + 1) + *(it + 2) + *(it + 3) > target) break;
			if (*it + *(nums.end() - 1) + *(nums.end() - 2) + *(nums.end() - 3) < target) continue;
			for (auto it2 = it + 1; it2 != nums.end() - 2;it2++)
			{
				if (*it + *it2 + *(it2 + 1) + *(it2 + 2) > target) break;
				if (*it + *it2 + *(nums.end() - 2) + *(nums.end() - 1) < target) continue;
				auto it3 = it2 + 1;
				auto it4 = nums.end() - 1;
				while (it3 != it4)
				{
					if (*it + *it2 + *it3 + *it4 > target) it4--;
					else if (*it + *it2 + *it3 + *it4 < target) it3++;
					else
					{
						results.push_back(vector<int>{*it, *it2, *it3, *it4});
						int temp3 = *it3, temp4 = *it4;
						while (it3 != it4 && *it3 == temp3) it3++;
						while (it3 != it4 && *it4 == temp4) it4--;
					}
				}
				int temp2 = *it2;
				while (it2 != nums.end() - 2 && *it2 == temp2) it2++;
				it2--;
			}
			int temp = *it;
			while (it != nums.end() - 3 && *it == temp) it++;
			it--;
		}
		return results;
	}
};

int main()
{
	Solution s1;
	vector<vector<int>> results = s1.fourSum(vector<int>{0,0,0,0}, 1);
	for (auto i : results)
	{
		for (auto j : i)
			cout << j << "\t";
		cout << endl;
	}
	system("pause");
}