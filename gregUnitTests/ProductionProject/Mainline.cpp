#include "Production.h"
#include <iostream>
#include <stdlib.h>
int main()
{
	Production p;
	p.someMethod(10);
	int arr[6];
	bool numbersEnteredOkay = false;
	int size = sizeof(arr) / sizeof(arr[0]);
	int maxSize = 46;
	std::cout << "Please enter a number, the press the enter key. Repeat this 6 times." << std::endl;
	while (!numbersEnteredOkay)
	{
		for (int i = 0; i < 6; i++)
		{

			std::cin >> arr[i];
		}
		

		int sizeResult = p.arraySizeDet(size);
		bool sizeCheckResult = p.sizeChecker(arr, size, maxSize);

		bool repeatResult = p.repeatingNum(arr, size);
		if (sizeCheckResult == false && repeatResult == false)
		{
			numbersEnteredOkay = true;
		}
		else
		{
			system("CLS");
			if (sizeCheckResult == true)
			{
				std::cout << "One or more the numbers you have entered are less than 1 or greater than 46. Please re-enter your numbers between 1 and 46." << std::endl;
			}
			if (repeatResult == true)
			{
				std::cout << "One or more of your numbers are duplicated, please re-enter to ensure no duplications" << std::endl;
			}
		}
	}
	
	return 0;
}
