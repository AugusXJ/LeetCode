#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution 
{
public:
	vector<vector<int>> threeSum(vector<int>& nums) 
	{
		vector<vector<int>> results;
		if (nums.size() < 3) return results;
		sort(nums.begin(), nums.end());
		for (auto it = nums.begin(); it != nums.end()-2;)
		{
			int target = -*it;
			vector<int>::iterator it2 = it + 1;
			vector<int>::iterator it3 = nums.end() - 1;
			while (it2 != it3)
			{
				int sum = *it2 + *it3;
				if (sum < target)
					it2++;
				else if (sum > target)
					it3--;
				else
				{
					results.push_back(vector<int>{*it, *it2, *it3});
					//»•÷ÿ∏¥
					int temp2 = *it2; int temp3 = *it3;
					while (it2 != it3 && *it2 == temp2) it2++;
					while (it2 != it3 && *it3 == temp3) it3--;
				}
			}
			int temp = *it;
			while (it != nums.end() - 2 && *it == temp) it++;
		}
		return results;

	}
};

int main()
{
	Solution s1;
	vector<int> nums = { 0,0,0};
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