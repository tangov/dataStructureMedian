#include <iostream>
#include "DataStructure.hpp"

using namespace std;

int main(int argc, char** argv) {
	int64_t n;
	cout<<"Enter number of elements do data structure"<<endl;
	cin>>n;
	DataStructure dataStructure;
	vector <int64_t> addedNumbers;
	addedNumbers.resize(n);
	for(int i = 0; i<addedNumbers.size(); ++i)
	{
		cout<<"Add new number = ";
		cin>>addedNumbers[i];
		dataStructure.addNumber(addedNumbers[i]);
	}
	cout<<"The median of : \n{";
	for(int i = 0; i<addedNumbers.size(); ++i)
	{
		cout<<addedNumbers[i]<<" ";
	}
	cout<<" }\n is "<<dataStructure.getMedian()<<endl;
	return 0;
}
