#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
class Solution 
{
public:
	vector<string> letterCombinations(string digits) 
	{
		vector<string> result;
		for (int i = 0; i != digits.length(); i++)
		{
			auto it = dict.find(digits[i]);
			if (it!=dict.end())
			{
				string letters = it->second;
				addLetter(letters, result);
			}
		}
		return result;
	}
private:
	void addLetter(const string letters, vector<string> &result)
	{
		vector<string> newResult;
		if (result.empty()) result.push_back("");
		for (int i = 0; i != letters.length(); i++)
		{
			char lett = letters[i];
			for (auto it = result.begin(); it != result.end(); it++)
			{
				newResult.push_back(*it+lett);
			}
		}
		swap(result, newResult);
	}
	const map<char, string> dict = {
		{'1',","},
		{'2',"abc"},
		{'3',"def"},
		{'4',"ghi"},
		{'5',"jkl"},
		{'6',"mno"},
		{'7',"pqrs"},
		{'8',"tuv"},
		{'9',"wxyz"}
	};
};



int main()
{
	Solution s1;
	string dig = "";
	vector<string> vecStr= s1.letterCombinations(dig);
	for (auto i : vecStr)
		cout << i << endl;
	system("pause");
	return 0;
}