#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	int myAtoi(string str) {
		long result=0;
		int sign=1, i=0;
		i = str.find_first_not_of(' ');
		if (str[i] == '+' || str[i] == '-')
			sign = str[i++] == '+' ? 1 : -1;
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i++] - '0');
			if (result > INT_MAX)
				return sign == 1 ? INT_MAX : INT_MIN;
		}
		return result*sign;
	}
};

int main()
{
	Solution sl;
	cout << sl.myAtoi("1") << endl;
	system("pause");
	return 0;
}