#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	int reverse(int x)
	{
		long res = 0;
		do
		{
			res = res * 10 + x % 10;
			x = x / 10;
			if (res > INT_MAX || res < INT_MIN) return 0;
		} while (x);
		return res;
	}
};

int main()
{
	Solution sl;
	cout << sl.reverse(-123) << endl;
	system("pause");
	return 0;
}