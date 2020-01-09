#include"PrintLinkList.h"

void PrintLinkList(LinkList L) {
	LNode* s = L->next;
	for (; s != NULL; s = s->next) {
		std::cout << "链表的数据为" << s->data << "    ";
	}
}