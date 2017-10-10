#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	int romanToInt(string s)
	{
		unordered_map<char, int> T = { { 'I' , 1 },
		{ 'V' , 5 },
		{ 'X' , 10 },
		{ 'L' , 50 },
		{ 'C' , 100 },
		{ 'D' , 500 },
		{ 'M' , 1000 } };

		int sum = T[s.back()];
		if (s.length() == 1)
			return sum;
		for (int i = s.length() - 2; i >= 0; --i)
		{
			if (T[s[i]] < T[s[i + 1]])
			{
				sum -= T[s[i]];
			}
			else
			{
				sum += T[s[i]];
			}
		}
		return sum;
	}

};

int main()
{
	Solution s1;
	cout << s1.romanToInt("DCXXI") << endl;
	system("pause");
	return 0;
}