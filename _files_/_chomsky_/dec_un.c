#include <stdio.h>

int main(void)
{
	printf
	    ("Írd be a számot decimálisan: ");

	int in = 0;
	scanf("%d", &in);
	
	printf("A szám unárisan:");
	
	for (int i = 0; i < in; ++i)
		(i % 5) ? printf("|") : printf(" |");

	printf("\n");
	return 0;
}
