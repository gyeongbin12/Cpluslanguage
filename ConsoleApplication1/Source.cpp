#include <iostream>

#define SIZE 10

int quickArray[SIZE] = { 4,1,2,3,9,7,8,6,10,5 };


void QuickSort(int data[], int start, int end)
{
	// 원소가 1개 있을 경우
	if (start >= end)
	{
		return;
	}

	int pivot = start;
	int left = start + 1;
	int right = end;

	while (left <= right)
	{
		// left가 end보다 작거나 같다면 반복
		// 왼쪽에 있는 left 변수를 pivot과 비교합니다
		while (left <= end && quickArray[left] < quickArray[pivot])
		{
			left++;
		}

		// right가 start보다 크다면
		// 오른쪽에 있는 right 변수를 pivot과 비교합니다.
		while (right > start && quickArray[right] > quickArray[pivot])
		{
			right--;
		}
		
		// if 왼쪽과 오른쪽 엇갈렸을때
		if (left > right)
		{
			std::swap(quickArray[pivot], quickArray[right]);
		}
		else // else right와 left의 값을 교환합니다.
		{
			std::swap(quickArray[left], quickArray[right]);
		}
	}

	QuickSort(quickArray, start, right - 1);
	QuickSort(quickArray, right + 1, end);
}


struct Node
{
	int key;
	int value;

	Node * next;
};

struct Bucket
{
	Node * head;
	int count;
};

class HashTable
{
private:
	Bucket* bucket = nullptr;
	int bucketSize = 5;

public:
	HashTable()
	{
		for (int i = 0; i < 5; i++)
		{
			bucket[i].count = 0;
			bucket[i].head = nullptr;
		}
	}

	Node * CreateNode(int key, int value)
	{
		Node* newNode = new Node;
		newNode->key = key;
		newNode->value = value;
		newNode->next = nullptr;
		return newNode;
	}
	
	int HashFunction(int key)
	{
		return key % 5;
	}

	void Insert(int key, int value)
	{
		// 해시 값을 받는 변수
		int hashIndex = HashFunction(key);

		// 새로운 노드를 생성합니다.
		Node* newNode = CreateNode(key, value);

		// 노드가 한개라도 존재하지 않으면
		if (bucket[hashIndex].count == 0)
		{

		}
		// 노드가 한개라도 존재하면 
		else 
		{

		}
	}

	void Remove(int key)
	{

	}

	void Search(int key)
	{

	}

	
};

int main()
{
#pragma region 퀵 정렬 
	// 기준점을 획득한 다음 해당 기준점을 기준으로 배열을 나누고 
	// 한 쪽에는 기준점보다 작은 항목들이 위치하고 다른 쪽에는 기준점보다 큰 항목들이 위치한다.
	//	QuickSort(quickArray, 0, SIZE - 1);
	//	
	//	
	//	for (int i = 0; i < SIZE; i++)
	//	{
	//		std::cout << quickArray[i] << " ";
	//	}
	// 나뉘어진 하위 배열에 대해 재귀적으로 퀵 정렬을 호출하여,
	// 모든 배열이 기본 배열(요소가 하나뿐인 배열)이 될 때까지 반복하는 알고리즘입니다.


#pragma endregion


#pragma region 해시테이블
	// (Key, Value)로 데이터를 저장하는 자료구조 중 하나로
	// 빠르게 데이터를 검색할 수 있는 자료구조입니다. 
	
	// 해시 테이블의 평균 시간 복잡도는 0(1)입니다.

	// 해시 충돌을 해결하는 방법

	// 체이닝 기법
	// 각 해시 버킷을 연결리스트로 구성하는 방식입니다.

	// 해시 충돌 발생 시 동일한 에 해당하는 데이터들을
	// 연결리스트로 연결하여 저장합니다.

	// 개방 주소법
	// 충돌 발생 시 빈 버켓에 데이터를 저장하는 방식입니다.

	// 빈 버킷을 어떻게 결정할 지에 따라 구현 방식이 달라집니다.

	// 선형 탐사 : 충돌발생 시 앞에서 부터 차례대로 빈 버킷을
	// 찾아 값을 저장하는 방식입니다.

	// 이차 탐사 : 충돌 발생 시 2^, 2^3만큼 떨어진 빈 버킷을 찾아
	// 값을 저장하는 방식입니다.

	// 이중 해싱 : 해시 값을 한번 더 해시 함수에 넣어 다른 해시값을
	// 도출하는 방식입니다.





#pragma endregion




	return 0;
}

                                                                          