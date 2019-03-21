struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) :val(x), next(NULL);
};
class Soluton
{
public:
	ListNode *reverseList(ListNode *head)
	{
	ListNode *pre = NULL, *nxt=NULL;
	while (head)
	{
		nxt = head->next;
		head->next = pre;
		pre = head;
		head = nxt;
	}
	return h;
	}




};