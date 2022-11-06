#include "GetArray.h"

int* GetArray::getArray(int N, int x)
{
	int* A = new int[x];

	for (int i = 0; i < x; i++)
	{
		A[i] = x;
		std::cout << A[i] << " ";
	}

	return A;
}