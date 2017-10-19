#include <string>
#include <vector>
#include <stdlib.h>
#include <sstream>
#include<iostream>

using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
	
};
class Solution 
{
public:
	ListNode* reverseKGroup(ListNode* head, int k) 
	{
		if (head == nullptr) return head;
		int l = 0;
		ListNode* kst = head;
		while (kst->next != nullptr && l<k-1)
		{
			kst = kst->next;
			l++;
		}
		ListNode* next = kst->next;
		if (l != k-1) return head;
		else
		{
			for (int i = k - 1; i > 0; i--)
			{
				getknext(head, i)->next = getknext(head, i - 1);
			}
			head->next = reverseKGroup(next, k);
			return kst;
		}
	}
	ListNode* getknext(ListNode *head,int k)
	{
		ListNode* n = head;
		while (k > 0)
		{
			n = n->next;
			k--;
		}
		return n;
	}
};

int main()
{
	Solution s;
	ListNode *l1 = new ListNode(1);
	ListNode *l2 = new ListNode(2);
	ListNode *l3 = new ListNode(3);
	ListNode *l4 = new ListNode(4);
	l1->next = l2; l2->next = l3; l3->next = l4;
	ListNode* l = s.reverseKGroup(l1,2);
	while (l != nullptr)
	{
		cout << l->val << endl;
		l = l->next;
	}
	system("pause");
	return 0;
}