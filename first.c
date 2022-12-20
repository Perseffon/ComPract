#include "first.h"
#include <string.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>

void func(void)
{
	int n=67;
	int *ar = (int*)malloc(n * sizeof(int));
	srand(time(0));
	for (int i=0;i<n;i++)
	{
		ar[i]=rand() % 100-50;
	}
	for (int i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
	for (int i=0;i<n;i++)
	{
		if(ar[i]<0)
		{
			ar[i]=ar[i]*ar[i];
		}
	}
printf("\n");
	for (int i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
	return;
}