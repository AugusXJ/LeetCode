#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> twoSum(const vector<int>& nums, int target)
	{
		vector<int> index(2);
		for (size_t i = 0; i < nums.size(); i++)
		{
			index[0] = i;
			for (size_t j = i+1; j < nums.size(); j++)
			{
				index[1] = j;
				if (nums[i] + nums[j] == target)
					return index;
			}
		}
		//ÈôÃ»ÓÐÕÒµ½
		index[0] = index[1] = -1;
		cout << "none of the nums summed equals target" << endl;
		return index;
	}
};


int main()
{
	Solution sl;
	const vector<int> nums = { 3,2,4 };
	const int target = 6;
	vector<int> result = sl.twoSum(nums, target);
	for (auto s : result)
		cout << s << endl;
	system("pause");
	return 0;
}