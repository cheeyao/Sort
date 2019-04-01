#include "BubbleSort.h"



BubbleSort::BubbleSort(int aArrayOfNumbers[], unsigned int aArraySize) : ArraySorter(aArrayOfNumbers, aArraySize)
{

}

void BubbleSort::sort(std::ostream& aOStream)
{
	//bool swapped;
	for (int i = 0; i < getRange() - 1; i++)
	{
		//swapped = false;
		for (int j = 0; j < getRange() - i - 1; j++)
		{
			if (at(j) > at(j + 1))
			{
				swapElements(j, j + 1);
				//swapped = true;
			}
			 
		}
		stepCompleted(aOStream);

		//if (swapped == false)
		//break;
	}
	
}
