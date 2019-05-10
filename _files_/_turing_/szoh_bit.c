
  
#include <stdio.h>

int main()
{
	unsigned long int a = 1, count = 0;

	do
		count++;
	while (a <<= 1);

	printf("Szóhossz: %d.\n", count);
	return 0;
}
