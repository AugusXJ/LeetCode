#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s)
	{
		string::iterator head, tail;
		head = tail = s.begin();
		int length = 0;

		while (head != s.end())
		{
			auto it = find(tail,head,*(head));
			if (it != head)							//»Ù’“µΩ
			{
				if(length<head - tail)
				length = head - tail;
				tail = it + 1;	
				if (s.end() - tail < length)
					break;
			}
			head++;

		}
		if (length < head - tail)
			length = head - tail;
		return length;
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
	string s = { "abcabcbb" };
	cout << sl.lengthOfLongestSubstring(s) << endl;

	/*
	demo 2:
	input: "bbbbb"
	output: 1
	*/
	//string s = { "bbbbb" };
	//cout << sl.lengthOfLongestSubstring(s) << endl;

	/*
	demo 3:
	input: "pwwkew"
	output: 3
	*/
	//string s = { "pwwkew" };
	//cout << sl.lengthOfLongestSubstring(s) << endl;

	/*
	demo 4:
	input: "dvdf"
	output: 3
	*/
	//string s = { "dvdf" };
	//cout << sl.lengthOfLongestSubstring(s) << endl;
	system("pause");
	return 0;
}