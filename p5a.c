/**
 * 5. Napisz program, używajacy wskaźników do nadania wartości 128 każdemu 
 * elementowi tablicy int tab[512]. Przetestuj ją w prostym programie. 
 * Jak inaczej można zainicjalizować tablicę w C?
 */
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE(x) (sizeof(x)/sizeof(x[0]))

int main(void)
{
 	int tab[512];
 	int i;

 	for(i=0; i < ARRAY_SIZE(tab); ++i) tab[i] = 128;
 	
 	return 0;
}