#include "second.h"
#include <string.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>

void func(void)
{
	int n=7,m=6;
	int *ar = (int*)malloc(n*m * sizeof(int));
	srand(time(0));
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
			*(ar + i*m + j)=rand() % 100-50;
	}
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%5d",*(ar + i*m + j));
		}	
		printf("\n");
	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			if(*(ar + i*m + j)<0)
			{
				*(ar + i*m + j)=*(ar + i*m + j)*(*(ar + i*m + j));
			}
		}
		
	}
printf("second\n");
for (int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%5d",*(ar + i*m + j));
		}	
		printf("\n");
}
	free(ar);
	return;
}