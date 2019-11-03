#include <iostream>
#include <assert.h>
#include <array>

#include "../ProductionProject/Production.h"

using namespace std;

int main()
{
	Production p;

	
	int arr[] = { 10,7,7,48,21,80 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int maxSize = 80;
	
	assert(p.arraySizeDet(size)==6);
	int sizeCheckResult = p.sizeChecker(arr, size, maxSize);
	assert(sizeCheckResult<maxSize && sizeCheckResult>1);
	assert(p.repeatingNum(arr, size)==false);
	cin.get();
}