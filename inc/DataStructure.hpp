
#pragma once
#include <queue>
#include <stdint.h>

class DataStructure
{
public:
	double getMedian();
	void addNumber(const int64_t number);
private:
	std::priority_queue<int64_t> smallerNumbers;
	std::priority_queue< int64_t, std::vector<int64_t>, std::greater<int64_t> > biggerNumbers;
};

