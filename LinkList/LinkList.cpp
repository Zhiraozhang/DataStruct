#include<iostream>
using namespace std;

typedef struct LNode {
	int data;
	LNode* next;
}*LinkList;

LinkList HeadInsert(LinkList& L) {
	int x;
	L = new LNode;
	L->next = NULL;
	cout << "������x: ";
	cin >> x;
	while (x != 9999) {
		LNode* s = new LNode;
		s->data = x;
		s->next = L->next;
		L->next = s;
		cout << "��������һ��ֵ: ";
		cin >> x;
	}
	return L;
}

LinkList TailInsert(LinkList& L) {
	int x;
	L = new LNode;
	LNode* Tail = L;
	cout << "������x��";
	cin >> x;
	while (x != 9999) {
		LinkList s = new LNode;
		s->data = x;
		Tail->next = s;
		Tail = s;
		cout << "��������һ��ֵ: ";
		cin >> x;
	}
	Tail->next = NULL;
	return L;
}

void Print(LinkList L) {
	LNode* s = L->next;
	for (; s != NULL; s = s->next) {
		cout << "���������Ϊ"<<s->data << "    ";
	}
}

int main() {
	LinkList L1;
	TailInsert(L1);
	Print(L1);
	return 0;
}