#include "ArraySorter.h"

#include <stdexcept>

using namespace std;


ArraySorter::ArraySorter(const int aArrayOfNumbers[], unsigned int aArraySize)
{
	//copy array into sorter
	fArrayOfNumbers = new int(aArraySize);

	for (unsigned int i = 0; i < aArraySize; i++)
	{
		fArrayOfNumbers[i] = aArrayOfNumbers[i];
	}

	fArraySize = aArraySize;
}

ArraySorter::~ArraySorter()
{
	//delete memory associated with array
	delete[] fArrayOfNumbers;
}

void ArraySorter::stepCompleted(std::ostream& aOStream)
{
	 aOStream << "State: " << *this << endl;
}

void ArraySorter::swapElements(unsigned int aSourcIndex, unsigned int aTargetIndex)
{
	swap(fArrayOfNumbers[aSourcIndex], fArrayOfNumbers[aTargetIndex]);
}

const unsigned int ArraySorter::at(unsigned int aIndex) const
{
	if (aIndex >= fArraySize)
	{
		throw range_error("Range error");
	}
	return fArrayOfNumbers[aIndex];
}

const unsigned int ArraySorter::getRange() const
{
	return fArraySize;
}

void ArraySorter::sort(std::ostream& aOStream)
{
	stepCompleted(aOStream);
}

ostream& operator<<(std::ostream & aOStream, const ArraySorter & aObject)
{

	aOStream << "[";

	for (unsigned int i = 0; i < aObject.getRange(); i++)
	{
		aOStream << aObject.fArrayOfNumbers[i];

		if (i != aObject.fArraySize - 1) 
		{
			aOStream << ","; 
		}
	}

	aOStream << "]";

	return aOStream;
}
