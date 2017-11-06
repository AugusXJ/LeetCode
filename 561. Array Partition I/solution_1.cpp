#include <vector>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <stack>
#include <string>

using namespace std;



class Solution 
{
public:
	int arrayPairSum(vector<int>& nums) 
	{
		sort(nums.begin(), nums.end());
		int sum = 0;
		for (int i = 0; i < nums.size(); i += 2)
			sum += nums[i];
		return sum;
	}
};

int main()
{
	Solution s;
	vector<int> vec = { 1,4,3,2 };
	cout << s.arrayPairSum(vec);

	system("pause");
	return 0;
}