#include <omp.h>
#include <stdio.h>

int main(void)
{
int x=0;
#pragma omp parallel
while (x<1) {
}
}
///gcc -fopenmp 3.c -o 3 <--így futtasd...
