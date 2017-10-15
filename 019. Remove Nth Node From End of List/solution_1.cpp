#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <iostream>
#include <memory>
using namespace std;


class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
	{
		ListNode* second = head->next;
		
		if (head->next == nullptr) return nullptr;
		int length = 0;
		ListNode *target = head;
		while (target != nullptr)
		{
			length++;
			target = target->next;
		}

		//找到目标节点
		ListNode *bf_target = nullptr;
		target = head;
		n = length+1 - n;
		while (n != 1)
		{
			bf_target = target;
			target = target->next;
			n--;
		}
		if (bf_target != nullptr) bf_target->next = target->next;
		if (target == head) 
			return target->next;
		else
		{
			target->next = nullptr;
			return head;
		}

    }
};

int main()
{
	Solution s1;
	ListNode* n1 = new ListNode(1);
	ListNode* n2 = new ListNode(2);
	n1->next = n2;
	ListNode* r = s1.removeNthFromEnd(n1,2);
	cout << r->val << endl;
	

	system("pause");
}