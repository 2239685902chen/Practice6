#include <stdio.h>
#include <stdlib.h>
int tre(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int main()
{
	int q[] = { 9,8,7,6,5,4,3,2,1,0 };
	int e = 0;
	int w = sizeof(q) / sizeof(q[0]);
	qsort(q, w, sizeof(q[0]), tre);
	for (e = 0; e < w; e++)
	{
		printf("%d ", q[e]);
	}
	printf("\n");
	return 0;
}