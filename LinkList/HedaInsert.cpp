#include"HeadInsert.h"

LinkList HeadInsert(LinkList& L) {
	int x;
	L = new LNode;
	L->next = NULL;
	std::cout << "������x: ";
	std::cin >> x;
	while (x != 9999) {
		LNode* s = new LNode;
		s->data = x;
		s->next = L->next;
		L->next = s;
		std::cout << "��������һ��ֵ: ";
		std::cin >> x;
	}
	return L;
}