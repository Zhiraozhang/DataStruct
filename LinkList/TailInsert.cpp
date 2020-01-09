#include"TailInsert.h"

LinkList TailInsert(LinkList& L) {
	int x;
	L = new LNode;
	LNode* Tail = L;
	std::cout << "请输入x：";
	std::cin >> x;
	while (x != 9999) {
		LinkList s = new LNode;
		s->data = x;
		Tail->next = s;
		Tail = s;
		std::cout << "请输入下一个值: ";
		std::cin >> x;
	}
	Tail->next = NULL;
	return L;
}