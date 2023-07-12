﻿#include <iostream>

// 1. 노드 만들기
struct NODE
{
	int data;
	NODE* next;
};

void AddNode(NODE * target, int data)
{
	// 1. NODE 생성
	NODE* newNode = new NODE;

	// 2. 새로운 노드의 data 값을 저장합니다.
	newNode->data = data;

	// 3. 새로운 노드의 next 포인터에 nullptr을 가지고 있는 포인터를 저장합니다.
	newNode->next = target->next;

	// 4. 이전 노드의 다음 주소에 새로운 노드의 주소를 저장합니다.
	target->next = newNode;
}

void ShowNode(NODE * targetPtr)
{
	NODE* currentPtr = targetPtr;

	while (currentPtr != nullptr)
	{
		currentPtr = currentPtr->next;

		if (currentPtr != nullptr)
		{
			std::cout << currentPtr->data << std::endl;
		}
	}
}

int main()
{
	// 단일 연결 리스트
	/*
	 
	// [dummy 노드]
	NODE* dummy = new NODE;

	// [node1 노드]
	NODE* node1 = new NODE;

	// [node2 노드]
	NODE* node2 = new NODE;

	// 1. dummy의 next 포인터 <- node1의 시작주소
	dummy->next = node1;

	// 2. node1의 data 변수 10으로 초기화
	node1->data = 10;

	// 3. node1의 next 포인터 <- node2의 시작 주소
	node1->next = node2;

	// 4. node2의 data 변수 20으로 초기화
	node2->data = 20;

	// 5. node2의 next 포인터는 nullptr을 저장합니다.
	node2->next = nullptr;

	ShowNode(dummy);

	delete dummy;
	delete node1;
	delete node2;
	*/

	// 단일 연결 리스트 (함수)
	NODE* dummy = new NODE;

	dummy->next = nullptr;

	AddNode(dummy, 10);
	AddNode(dummy, 20);
	AddNode(dummy, 30);

	ShowNode(dummy);

	delete dummy;

}

