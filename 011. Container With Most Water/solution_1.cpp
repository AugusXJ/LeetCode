#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


class Solution {
public:
	int maxArea(vector<int>& height) {
		int i = 0, j = height.size() - 1;
		int water = 0,h;
		while (i < j)
		{
			h = min(height[i], height[j]);
			water = max(water,h*(j - i));
			while (height[i] <= h && i < j) i++;
			while (height[j] <= h && i < j) j--;
		}
		return water;
	}
};

int main()
{
	vector<int> height = { 1,4,3 };
	Solution sl;
	cout << sl.maxArea(height) << endl;
	system("pause");
	return 0;
}