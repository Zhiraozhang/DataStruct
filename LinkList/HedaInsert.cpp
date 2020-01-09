#include"HeadInsert.h"

LinkList HeadInsert(LinkList& L) {
	int x;
	L = new LNode;
	L->next = NULL;
	std::cout << "请输入x: ";
	std::cin >> x;
	while (x != 9999) {
		LNode* s = new LNode;
		s->data = x;
		s->next = L->next;
		L->next = s;
		std::cout << "请输入下一个值: ";
		std::cin >> x;
	}
	return L;
}