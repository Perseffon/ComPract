#include "load.h"
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a=0,b=1;
	printf("Choose library:\n1-first.\n2-second,\n3-quit\n");
	while(b)
	{
		scanf("%d",&a);
		if(a==1)
			{
				LoadRun("first.dll");
			}
		if(a==2)
			LoadRun("second.dll");
		if(a==3)
			b=0;
	}
	return 0;
}