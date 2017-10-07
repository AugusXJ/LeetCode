#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	bool isPalindrome(int x) {
		if (x >= 0)
		{
			vector<int> nums;
			while (x > 0)
			{
				nums.push_back(x % 10);
				x = x / 10;
			}
			int i = 0, length = nums.size();
			while (i < ceil(length / 2.0))
			{
				if (nums[i] != nums[length - i - 1])
					return false;
				i++;
			}
			return true;
		}
		return false;
	}
};

int main()
{
	Solution sl;
	cout << sl.isPalindrome(0) << endl;
	system("pause");
	return 0;
}