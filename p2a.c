#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE(x) (sizeof(x)/sizeof(x[0]))

int tablica[] = {5, 6, 3, 6, 2, 8, 9, 2, 4, 0, -1};

int int_compare (const void * a, const void * b)
{
    int _a = *(int*)a;
    int _b = *(int*)b;
    if(_a < _b) return -1;
    else if(_a == _b) return 0;
    else return 1;
}

int main() 
{
	int ostatni = ARRAY_SIZE(tablica);
	int roznica = 0;
	qsort(tablica, ostatni, sizeof(int), int_compare);
	roznica =  max(tablica[0],tablica[ostatni-1]) - min(tablica[0],tablica[ostatni-1]);
	printf("%d\n", roznica);
	return 0;
}