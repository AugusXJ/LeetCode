#include <vector>
#include <stdlib.h>
#include <iostream>
#include <unordered_map>

using namespace std;
class Solution 
{
public:
	vector<int> findSubstring(string s, vector<string>& words) 
	{
		vector<int> result;
		unordered_map<string, int> counts;
		for (auto word : words)
			counts[word]++;
		size_t n = s.size(), num = words.size(), len = words[0].size();
		for (int i = 0; i < n - num*len + 1; i++)
		{
			unordered_map<string, int> seen;
			int j = 0;
			while (j != num)
			{
				string word = s.substr(i + j*len, len);
				if (counts.find(word) != counts.end())
				{
					seen[word]++;
					if (seen[word] > counts[word])
						break;
				}
				else break;
				j++;
			}
			if (j == num)
				result.push_back(i);
		}
		return result;
	}
};

int main()
{
	Solution s;
	string ss = "barfoothefoobarman";
	vector<string> words = { "foo","bar" };
	vector<int> nums = { 1,1,2,3,4 };
	vector<int> result = s.findSubstring(ss, words);
	for (auto i : result)
		cout << i << endl;
	system("pause");
	return 0;
}