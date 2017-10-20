#include <vector>
#include <stdlib.h>
#include <iostream>

using namespace std;
class Solution 
{
public:
	int removeDuplicates(vector<int>& nums) 
	{
		if (nums.size() < 2) return nums.size();
		for (auto it = nums.begin()+1; it != nums.end();)
		{
			if (*(it - 1) == *it)
			{
				it = nums.erase(it);
			}
			else
				it++;
		}
		return nums.size();
	}
};

int main()
{
	Solution s;
	vector<int> nums = { 1,1,2,3,4 };
	cout << s.removeDuplicates(nums) << endl;
	system("pause");
	return 0;
}