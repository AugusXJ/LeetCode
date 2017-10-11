#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
class Solution 
{
public:
	int threeSumClosest(vector<int>& nums, int target) 
	{
		int closestNum = target + 1000;
		if (nums.size() < 3) throw runtime_error("no three nums");
		sort(nums.begin(), nums.end());
		for (auto it = nums.begin(); it != nums.end() - 2;it++)
		{
			int target_ab = -*it+target;
			vector<int>::iterator it2 = it + 1;
			vector<int>::iterator it3 = nums.end() - 1;
			while (it2 != it3)
			{
				int sum = *it2 + *it3;
				if (sum == target_ab)
					return target;
				else
				{
					closestNum = abs(closestNum - target) > abs(*it + *it2 + *it3 - target) ?
						*it + *it2 + *it3 : closestNum;
					sum < target_ab ? it2++: it3--;
				}
			}
		}
		return closestNum;
	}
};



int main()
{
	Solution s1;
	vector<int> nums = { -1,2,1,4 };
	int result = s1.threeSumClosest(nums, 1);
	cout << result << endl;
	system("pause");
	return 0;
}