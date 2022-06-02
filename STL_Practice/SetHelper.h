#pragma once
#include <set>

class SetHelper
{
public:
	void AddNewElementOnSet(int);
	void DeleteElementByValue(int);
	void RemoveElementFromBeginToValue(int);
	std::set<int> GetSetCollection();
private:
	std::set<int> setOfNumbers;
};

