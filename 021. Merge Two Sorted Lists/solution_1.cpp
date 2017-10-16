#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <iostream>
#include <memory>
#include <stack>
using namespace std;


class ListNode
{
public:
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
	{
		if (l1 == nullptr) return l2;
		if (l2 == nullptr) return l1;
		if (l1->val < l2->val)
		{
			l1->next = mergeTwoLists(l1->next, l2);
			return l1;
		}
		else
		{
			l2->next = mergeTwoLists(l1, l2->next);
			return l2;
		}
	}
};

int main()
{
	Solution s1;
	ListNode* l11 = new ListNode(1);
	ListNode* l12 = new ListNode(3);
	ListNode* l13 = new ListNode(5);
	ListNode* l14 = new ListNode(7);
	l11->next = l12; l12->next = l13; l13->next = l14;
	ListNode* l21 = new ListNode(2);
	ListNode* l22 = new ListNode(4);
	ListNode* l23 = new ListNode(6);
	ListNode* l24 = new ListNode(8);
	l21->next = l22; l22->next = l23; l23->next = l24;
	ListNode *r = s1.mergeTwoLists(l11, l21);
	while (r!=nullptr)
	{
		cout << r->val << endl;
		r = r->next;
	}
	

	system("pause");
}