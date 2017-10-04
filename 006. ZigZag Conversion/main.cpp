#include <string>
#include <vector>
#include <stdlib.h>
#include <sstream>
#include<iostream>

using namespace std;
class Solution {
public:
	string convert(string s, int numRows)
	{
		if (numRows == 1)
			return s;
		vector<vector<char>> zig(numRows);
		string way = "down";
		istringstream ss(s); char word;
		int i = -1; int j = 0;
		while (ss >> word)
		{
			if (way == "down")
			{
				i++;
				if (j != 0)
					zig[i][j] = word;
				else
					zig[i].push_back(word);
				if (i == numRows-1)
					way = "right";
			}
			else if (way == "right")
			{
				i--; j++;
				for (auto it = zig.begin(); it != zig.end(); it++)
					it->push_back(' ');
				zig[i][j] = word;
				if (i == 0)
					way = "down";
			}
		}
		string out; int num = 0;
		for (auto it1 = zig.begin(); it1 != zig.end(); it1++)
		{
			for (auto it2 = it1->begin(); it2 != it1->end(); it2++)
			{
				cout << *it2;
				if (*it2 != ' ')
				{
					out.push_back(*it2);
				}
			}
			cout << endl;
		}
		return out;
	}
};

int main()
{
	Solution s;
	cout << s.convert("PAYPALISHIRING",3) << endl;
	system("pause");
	return 0;
}