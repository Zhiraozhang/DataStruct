#include"TailInsert.h"

LinkList TailInsert(LinkList& L) {
	int x;
	L = new LNode;
	LNode* Tail = L;
	std::cout << "������x��";
	std::cin >> x;
	while (x != 9999) {
		LinkList s = new LNode;
		s->data = x;
		Tail->next = s;
		Tail = s;
		std::cout << "��������һ��ֵ: ";
		std::cin >> x;
	}
	Tail->next = NULL;
	return L;
}