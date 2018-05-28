#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    string reverseString(string s)
    {
        string rev_s;
        for(auto it = s.rbegin(); it != s.rend(); it++)
            rev_s.push_back(*it);
        return rev_s;
    }
};

int main()
{
    Solution s1;
    cout << s1.reverseString("abv")<<endl;
    system("pause");
}
