#include"PrintLinkList.h"

void PrintLinkList(LinkList L) {
	LNode* s = L->next;
	for (; s != NULL; s = s->next) {
		std::cout << "���������Ϊ" << s->data << "    ";
	}
}