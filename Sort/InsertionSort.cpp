#include "InsertionSort.h"

InsertionSort::InsertionSort(int aArrayOfNumbers[], unsigned int aArraySize) : ArraySorter(aArrayOfNumbers, aArraySize)
{
}

void InsertionSort::sort(std::ostream & aOStream)
{
	int i, key, j;
	for (i = 1; i < getRange(); i++)
	{
		key = at(i);
		j = i - 1;

		while (j >= 0 && at(j)> key) {
			swapElements(j + 1, j);
			j = j - 1;
		}

		stepCompleted(aOStream);
	}

}
