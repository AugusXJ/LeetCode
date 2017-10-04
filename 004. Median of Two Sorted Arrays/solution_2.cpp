#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
	{
		int n1 = nums1.size();
		int n2 = nums2.size();
		if ((n1 + n2) % 2 == 0)
			return (getKth(nums1, nums2, (n1 + n2) / 2) + getKth(nums1, nums2, (n1 + n2 + 2) / 2)) *1.0/ 2;
		else
			return getKth(nums1, nums2, (n1 + n2 + 2) / 2);
	}
	int getKth(vector<int> A, vector<int> B, int k)
	{
		if (A.size() > B.size()) return getKth(B, A, k);
		if (A.size() == 0) return B[k - 1];
		if (k == 1) return min(A[0], B[0]);
		int pa = min(k / 2, A.size());
		int pb = k - pa;
		if (A[pa - 1] < B[pb - 1])
		{
			vector<int> C(A.begin() + pa, A.end());
			return getKth(C, B, pb);
		}
		else
		{
			vector<int> C(B.begin() + pb, B.end());
			return getKth(A, C, pa);
		}
	}
	int min(int a, int b) const
	{
		return a < b ? a : b;
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