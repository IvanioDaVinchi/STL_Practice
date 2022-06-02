#include "SetHelper.h"

void SetHelper::AddNewElementOnSet(int d)
{
	setOfNumbers.insert(d);
}

void SetHelper::DeleteElementByValue(int value)
{
	if (!setOfNumbers.empty())
	{
		setOfNumbers.erase(setOfNumbers.find(value));
	}
	else
		throw std::exception("Error! Set is empty!");
}

void SetHelper::RemoveElementFromBeginToValue(int value)
{
	if (!setOfNumbers.empty())
	{
		setOfNumbers.erase(setOfNumbers.begin(), setOfNumbers.find(value));
	}
	else
		throw std::exception("Error! Set is empty!");
}

std::set<int> SetHelper::GetSetCollection()
{
	return setOfNumbers;
}
