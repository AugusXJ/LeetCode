#include <vector>
#include <stdlib.h>
#include <iostream>

using namespace std;
class Solution {
public:
	int removeElement(vector<int>& nums, int val) 
	{
		for (auto it = nums.begin(); it != nums.end(); )
		{
			if (*it == val)
				it = nums.erase(it);
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
	cout << s.removeElement(nums,1) << endl;
	system("pause");
	return 0;
}