#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE(x) (sizeof(x)/sizeof(x[0]))
#define MIN(a,b) (a<b)?(a):(b)
#define MAX(a,b) (a>b)?(a):(b)

int tablica[] = {5, 6, 3, 6, 2, 8, 9, 2, 4, 0, -1};

int main() 
{
	int i, roznica, max_elem = tablica[0], min_elem = tablica[0];

	for(i = 1; i < ARRAY_SIZE(tablica); ++i) {
		max_elem = MAX(max_elem, tablica[i]);
		min_elem = MIN(min_elem, tablica[i]);
	}

	roznica = max_elem - min_elem;
	printf("%d\n", roznica);
	return 0;
}