#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	string longestPalindrome(string s)
	{
		string::iterator head;
		head = s.begin();
		string lp(s,0,1);
		int length = 0;

		while (head != s.end())
		{
			for (auto it = s.begin(); it != head; it++)
			{
				if (*it == *head)
				{
					string temp;
					temp.insert(temp.end(), it, head + 1);
					if (temp.size()>length && judgePalindrome(temp))
					{
						length = temp.size();
						lp = temp;
					}
				}
			}
			head++;
		}
		return lp;
	}
	bool judgePalindrome(string s)
	{
		if (s.size() == 0) return false;
		auto it1 = s.begin(); 
		auto it2 = (s.end() - 1);
		while (true)
		{
			if (it1 == it2 || it1 > it2) return true;
			if (*it1 != *it2)
				return false;
			it1++; it2--;

		}
	}
};

int main()
{
	Solution sl;
	/*
	demo 1:
	input: "abcabcbb"
	output: 3
	*/
	//string s = { "abcabcbb" };
	//cout << sl.longestPalindrome(s) << endl;

	/*
	demo 2:
	input: "bbbbb"
	output: 1
	*/
	//string s = { "bbbbb" };
	//cout << sl.longestPalindrome(s) << endl;

	/*
	demo 3:
	input: "pwwkew"
	output: 3
	*/
	//string s = { "pwwkew" };
	//cout << sl.longestPalindrome(s) << endl;

	/*
	demo 4:
	input: "dvdf"
	output: 3
	*/
	string s = { "ccc" };
	cout << sl.longestPalindrome(s) << endl;
	system("pause");
	return 0;
}