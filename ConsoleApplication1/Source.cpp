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
			std::cout << "HEAP�� ���� á���ϴ�." << std::endl;
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
		// 1. �ӽú���

		// 2. heap ����ִٸ� �Լ���ȯ

		// 3. index �� ����Ű�� �迭�� ����  ù��° �迭�� ������ �־��ֱ�

		// 4. index �� ����Ű�� �迭�� ���� �ʱ�ȭ �Ϻ��.

		// 5. index�� ���ҽ�ŵ�ϴ�.

		// 6. �θ𺯼� <-1

		// 7. �ݺ��� ���� (parent * 2 < = index)
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
#pragma region ��
	// ���� ���� �߿��� �ִ� Ȥ�� �ּڰ���
	// ������ ã�Ƴ��� ���� �ڷᱸ���Դϴ�.

	// �ִ� ��
	// �θ� ����� Ű ���� �ڽ� ����� Ű ������
	// ũ�ų� ���� ���� ���� Ʈ��

	MAX_HEAP maxHeap;

	maxHeap 

#pragma endregion


	return 0;
}

