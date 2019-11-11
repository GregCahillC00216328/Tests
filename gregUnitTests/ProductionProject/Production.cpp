#include "Production.h"
#include <iostream>
int Production::someMethod(int a)
{
	return a - a;
}

int Production::arraySizeDet(int t_size)
{
	//Wasnt sure how to get the size of an array after passing it to a function here.
	return t_size;
}


bool Production::sizeChecker(int arr[],int t_arrSize, int t_compareVal) {
	//loops through the array and checks if the num is bigger thans the compare val, or less than one
	for (int i = 0; i < t_arrSize; i++) {
		if (arr[i]<1 || arr[i]>t_compareVal)
		{
			return true;
		}
	}
	return false;
}

bool Production::repeatingNum(int arr[], int t_arrSize)
{
	//loops through the array with J being compared to the current i, 
	//once the array has finished the J loop, i goes to the next spot in the array.
	//if at any point a number is repeated, it returns true, else returns false.
	for (int i = 0; i < t_arrSize; i++) {
		for (int j=0;j<t_arrSize;j++)
		{
			if(arr[j]==arr[i] && j!=i)
			{
				return true;
			}
		}
	}
	return false;
}
