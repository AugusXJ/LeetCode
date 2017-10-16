#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <iostream>
#include <memory>
#include <string>
#include <stack>
using namespace std;


class ListNode
{
public:
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};
class Solution 
{
public:
	ListNode* mergeKLists(vector<ListNode*>& lists) 
	{
		int index = findMin(lists);
		if (index == -1) return nullptr;
		ListNode* temp = lists[index];
		lists[index] = lists[index]->next;
		temp->next = mergeKLists(lists);
		return temp;
	}
private:
	int findMin(vector<ListNode*>& lists)
	{
		int min = INT_MAX;
		int index = -1;
		int flag = 0;
		for (auto l : lists)
		{
			if (l!=nullptr && l->val < min)
			{
				min = l->val;
				index = flag;
			}
			flag++;
		}
		return index;
	}
};

int main()
{
	
	Solution s1;
	ListNode* l11 = new ListNode(1);
	ListNode* l12 = new ListNode(4);
	ListNode* l13 = new ListNode(7);
	l11->next = l12; l12->next = l13;
	ListNode* l21 = new ListNode(2);
	ListNode* l22 = new ListNode(5);
	ListNode* l23 = new ListNode(8);
	l21->next = l22; l22->next = l23;
	ListNode* l31 = new ListNode(3);
	ListNode* l32 = new ListNode(6);
	ListNode* l33 = new ListNode(9);
	l31->next = l32; l32->next = l33;
	vector<ListNode*> vec = { l11,l21,l31 };
	ListNode* result = s1.mergeKLists(vec);
	while (result != nullptr)
	{
		cout << result->val << endl;
		result = result->next;
	}
	

	system("pause");
}