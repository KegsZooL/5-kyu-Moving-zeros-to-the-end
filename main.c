#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>



void move_zeros(size_t len, int* arr)
{	
	for(int k = 0; k < len; k++)
	{
		for (int i = 0; i < len; i++)
		{
			int tmp = arr[i];

			if (arr[i] == 0)
			{
				for (int j = i; j < len && (j + 1) != len; j++)
				{
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
				break;
			}
		}
	}

	for (int i = 0; i < len; i++)
		printf("%d ", arr[i]);
}

int main()
{
	int arr[] = {9, 0, 0, 9, 1, 2, 0, 1, 0, 1, 0, 3, 0, 1, 9, 0, 0, 0, 0, 9};

	move_zeros(20, arr);

	return 0;
}