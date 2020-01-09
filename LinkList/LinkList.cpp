#include<iostream>
#include"LNode.h"
#include"HeadInsert.h"
#include"TailInsert.h"
#include"PrintLinkList.h"

using namespace std;

LinkList GetElem(LinkList L, int i) {	//按序号查找节点值
	if (i < 0)return NULL;
	LNode* p = L;
	while(p&&i>0){
		p = p -> next;
		i--;
	}
	if (p != NULL) {
		std::cout << p->data;
		return p;
	}
	else {
		cout << "不存在" << endl;
		return NULL;
	}
}

int main() {
	LinkList L1;
	//HeadInsert(L1);
	TailInsert(L1);
	//PrintLinkList(L1);
	GetElem(L1, 5);
	return 0;
}