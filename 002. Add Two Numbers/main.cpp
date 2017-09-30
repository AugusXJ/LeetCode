#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

class  ListNode
{
public:
	int val;
	ListNode *next;
	ListNode(int x) :val(x),next(nullptr) {}
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
	{
		int &&sum = l1->val + l2->val;
		ListNode* l = new ListNode(sum % 10);
		ListNode* ln = l;
		l1 = l1->next; l2 = l2->next;
		int carry = sum / 10;
		while ((l1 != nullptr||l2 != nullptr) || carry == 1)
		{
			int &&num1 = (l1 == nullptr ? 0 : l1->val);
			int &&num2 = (l2 == nullptr ? 0 : l2->val);
			sum = num1 + num2+carry;
			carry = sum / 10;
			l->next = new ListNode(sum % 10);
			l = l->next;
			l1 = l1 == nullptr ? l1 : l1->next;
			l2 = l2 == nullptr ? l2 : l2->next;
		}
		return ln;
	}
};


int main()
{
	Solution sl;
	/*²âÊÔ1£º 
	ÊäÈë£º5->4->3  2->6->4
	Êä³ö£º7->0->8
	ListNode l1(5);
	*/
	//l1.next = &ListNode(4); l1.next->next = &ListNode(3);
	//ListNode l2(2);
	//l2.next =   &ListNode(6); l2.next->next = &ListNode(4);

	/*
	²âÊÔ2£º
	ÊäÈë£º5  5
	Êä³ö£º0->1
	*/
	//ListNode l1(5);
	//ListNode l2(5);

	/*
	²âÊÔ3£º
	ÊäÈë£º3->5 1->5
	Êä³ö£º4->0->1
	*/
	ListNode l1(3);
	ListNode l2(1);
	l1.next = &ListNode(5);
	l2.next =   &ListNode(5);

	ListNode* result = sl.addTwoNumbers(&l1, &l2);
	ListNode* temp = result;
	while (temp != nullptr)
	{
		cout << temp->val << "->";
		temp = temp->next;
	}
	cout << "nullptr" << endl;
	system("pause");
	return 0;
}