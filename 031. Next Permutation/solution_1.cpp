#include <string>
#include <vector>
#include <stdlib.h>
#include <sstream>
#include<iostream>
#include <algorithm>

using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
	
};
class Solution
{
public:
	void nextPermutation(vector<int>& nums) 
	{
		for (auto it = nums.rbegin()+1; it != nums.rend(); it++)
		{
			for (auto it2 = nums.rbegin(); it2 != it; it2++)
			{
				if (*it2 > *it)
				{
					swap(*it2, *it);
					sort(nums.rbegin(), it, [](int a, int b) {return a > b; });
					return;
				}
			}
		}
		reverse(nums.begin(), nums.end());
	}
};

int main()
{
	Solution s;
	vector<int> vec = { 1,2,3 };
	s.nextPermutation(vec);
	for (auto i : vec)
		cout << i << endl;
	system("pause");
	return 0;
}