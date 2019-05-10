#include <cstdlib>		// C++

int main(void)
{
	
	int a; // Egesz

	
	int *b; // Egeszre mutato mutato

	
	int *c = &a; // Egesz referenciaja

	
	int d[5]; // Egeszek tombje

	
	int (&e)[5] = d; // Egeszek tombjenek referenciaja
		         // int *e = malloc(5 * sizeof(int));

	
	int **f[5]; // Egeszre mutato mutatok tombje

	.
	int *g(void); // Egeszre mutato mutatot visszaado fv

	
	int *(*(*h)(void)) = h; // Egeszre mutato mutatot visszaado fv.re mutato mutato

	
	int (*(*i)(int))(int, int); // Egeszet visszaado es ket egeszet kapo fvre mutato
			            // mutatot visszaado, egeszet kapo fv

	
	int (*(*j)(int))(int, int) = i; // Fuggvenymutato egy egeszet visszaado  es ket egeszet
					// kapo fvre mutato mutatot visszaado, egeszet kapo
					// fvre

	return 0;
}
