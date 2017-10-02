#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
	{
		nums2.insert(nums2.end(), nums1.begin(), nums1.end());
		sort(nums2.begin(),nums2.end());
		int n = nums2.size();
		int index1,index2;
		double median;
		if ((n + 1) % 2 == 0)
			index1 = index2 = (n + 1) / 2;
		else
		{
			index1 = (n) / 2;
			index2 = index1 + 1;
		}
		median = (nums2[index1 - 1] + nums2[index2 - 1])*1.0 / 2;
		return median;
	}
};

int main()
{
	Solution sl;
	vector<int>nums1, nums2;
	nums1 = { 1,2 };
	nums2 = { 3,4 };
	cout << sl.findMedianSortedArrays(nums1, nums2) << endl;
	system("pause");
	return 0;
}