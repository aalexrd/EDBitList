#include "LinkedList.h"
#include <iostream>

int main(int argc, char* argv[])
{
	if (argc == 1 || argc > 2)
		return -1;
	std::string parameter = argv[1];
	for (char x : parameter)
		if (!isdigit(x))
			return -2;
	int i = atoi(argv[1]);
	bool isSigned = i < 0 ? true : false;
	if (isSigned)
		i *= -1;
	LinkedList<bool> list;
	while (true)
	{
		if (i % 2 == 0)
			list.add(false); // 0
		else
			list.add(true); // 1
		i /= 2;
		if (i == 1)
		{
			list.add(true); // 1 MSB
			if (isSigned)
				list.add(false); // MSB
			break;
		}
	}
	if (isSigned)
	{
		Node<bool>* iterator = list.listIterator(0);
		while (iterator)
		{
			if (iterator->getData() && isSigned)
			{
				iterator = iterator->getNext();
				isSigned = false;
				continue;
			}
			if (!isSigned)
				iterator->setData(!iterator->getData());
			iterator = iterator->getNext();
		}
	}
	std::cout << list.toString();
	return 0;
}
