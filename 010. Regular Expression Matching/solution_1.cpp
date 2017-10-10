#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
isMatch("aa","a") �� false
isMatch("aa","aa") �� true
isMatch("aaa","aa") �� false
isMatch("aa", "a*") �� true
isMatch("aa", ".*") �� true
isMatch("ab", ".*") �� true
isMatch("aab", "c*a*b") �� true
*/
class Solution {
public:
	bool isMatch(string s, string p) {
		if (p.empty())    return s.empty();

		if ('*' == p[1])
			// x* matches empty string or at least one character: x* -> xx*
			// *s is to ensure s is non-empty
			return (isMatch(s, p.substr(2)) || !s.empty() && (s[0] == p[0] || '.' == p[0]) && isMatch(s.substr(1), p));
		else
			return !s.empty() && (s[0] == p[0] || '.' == p[0]) && isMatch(s.substr(1), p.substr(1));
	}
};

int main()
{
	Solution sl;
	cout << sl.isMatch("aa", "a") << endl;
	cout << sl.isMatch("aa","aa")<< endl;
	cout << sl.isMatch("aaa", "aa") << endl;
	cout << sl.isMatch("aa", "a*") << endl;
	cout << sl.isMatch("aa", ".*") << endl;
	cout << sl.isMatch("ab", ".*") << endl;
	cout << sl.isMatch("aab", "c*a*b") << endl;
	system("pause");
	return 0;
}