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
class Solution {
public:
	ListNode* swapPairs(ListNode* head) {
		if (head == NULL)
			return NULL;
		if (head->next == NULL)
			return head;

		ListNode* next = head->next;
		head->next = swapPairs(next->next);
		next->next = head;

		return next;
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
	ListNode* l = s.swapPairs(l1);
	while (l != nullptr)
	{
		cout << l->val << endl;
		l = l->next;
	}
	system("pause");
	return 0;
}