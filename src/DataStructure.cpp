#include "DataStructure.hpp"
#define ODD_NUMBER_OF_ELEMENTS_DIVIDER ((double)2)

double DataStructure::getMedian()
{
	if (smallerNumbers.size() != biggerNumbers.size())
		return static_cast<double>(smallerNumbers.top());
		else
		return ((smallerNumbers.top() + biggerNumbers.top())/ODD_NUMBER_OF_ELEMENTS_DIVIDER);
}
void DataStructure::addNumber(const int64_t number)
{
	size_t sizeDifference = 0;
	if ( (smallerNumbers.empty()) || (number < smallerNumbers.top()))
	{
		smallerNumbers.push(number);
		sizeDifference = smallerNumbers.size() - biggerNumbers.size();
		if (sizeDifference  > 1) // smaller part shoul be bigger only with one element
		{
			biggerNumbers.push(smallerNumbers.top());
			smallerNumbers.pop();
		}	
	}
	else
	{
		biggerNumbers.push(number);
		sizeDifference = smallerNumbers.size() - biggerNumbers.size();
		if (sizeDifference != 0) // when adding to bigger part sizes should be equal
		{
			smallerNumbers.push(biggerNumbers.top());
			biggerNumbers.pop();
		}
	}
}
