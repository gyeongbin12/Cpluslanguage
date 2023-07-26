#include <iostream>

#define SIZE 8

class MAX_HEAP
{
private:
	int heapArray[SIZE];
	int index;

public:
	MAX_HEAP()
	{
		for (int i = 0; i < SIZE; i++)
		{
			heapArray[i] = NULL;
		}

		index = 0;
	}

	void Insert(int data)
	{
		if (index == SIZE - 1)	
		{
			std::cout << "HEAP이 가득 찼습니다." << std::endl;
			return;
		}

		heapArray[++index] = data;

		int child = index;
		int parent = index / 2;

		while (child > 1)
		{
			if (heapArray[parent] < heapArray[child])
			{
				std::swap(heapArray[parent], heapArray[child]);
			}

			child = parent;
			parent = child / 2;
		}
	}

	int& Delete()
	{
		// 1. 임시변수

		// 2. heap 비어있다면 함수반환

		// 3. index 로 가리키는 배열의 값을  첫번째 배열의 값으로 넣어주기

		// 4. index 로 가리키는 배열의 값을 초기화 하빈다.

		// 5. index를 감소시킵니다.

		// 6. 부모변수 <-1

		// 7. 반복문 선언 (parent * 2 < = index)
	}

	void Show()
	{
		for (int element : heapArray)
		{
			std::cout << element << std::endl;
		}
	}

};

int main()
{
#pragma region 힙
	// 여러 값들 중에서 최댓값 혹은 최솟값을
	// 빠르게 찾아내기 위한 자료구조입니다.

	// 최대 힙
	// 부모 노드의 키 값이 자식 노드의 키 값보다
	// 크거나 같은 완전 이진 트리

	MAX_HEAP maxHeap;

	maxHeap 

#pragma endregion


	return 0;
}

