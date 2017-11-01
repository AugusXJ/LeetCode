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
	vector<int> searchRange(vector<int>& nums, int target) {
		int idx1 = lower_bound(nums, target);
		int idx2 = lower_bound(nums, target + 1) - 1;
		if (idx1 < nums.size() && nums[idx1] == target)
			return { idx1, idx2 };
		else
			return { -1, -1 };
	}

	int lower_bound(vector<int>& nums, int target) {
		int l = 0, r = nums.size() - 1;
		while (l <= r) {
			int mid = (r - l) / 2 + l;
			if (nums[mid] < target)
				l = mid + 1;
			else
				r = mid - 1;
		}
		return l;
	}
};

int main()
{
	Solution s;
	vector<int> vec = { 5, 7, 7, 8, 8, 10 };
	vector<int> result = s.searchRange(vec, 8);
	for (auto i : result)
		cout << i << endl;

	system("pause");
	return 0;
}