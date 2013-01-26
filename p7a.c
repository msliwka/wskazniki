/**
 * 7. Napisać program znajdujący sumy roczne, roczne średnie oraz średnie miesięczne 
 * dla danych o opadach z kilku lat. W tym celu uzupełnij poniższy kod:
 */
#include <stdio.h>

#define MIESIACE 12
#define LATA 4

int suma_roczna(int* tab);


int main () 
{
	int deszcz[LATA][MIESIACE] = { // dane o opadach są wyrażone w mm
		{29, 34, 34, 39, 34, 47, 35, 27, 29, 28, 32, 38},  // 2008
		{24, 25, 30, 36, 29, 34, 30, 27, 27, 23, 28, 27},  // 2009
		{31, 36, 41, 42, 35, 43, 35, 30, 34, 31, 33, 37},  // 2010
		{39, 32, 50, 53, 39, 38, 50, 43, 36, 35, 54, 40}   // 2011
	};
	int i, j;
	int srednia = 0;
	int suma = 0;
	char* miesiace[] = {"I","II","III","IV","V","VI","VII","VIII","IX","X","XI","XII"};

	// sumy roczne
	printf("Opady w kolejnych latach (w mm)\n");
	for (i = 0; i < LATA; ++i) {
		suma = 0;
		for (j = 0; j < MIESIACE; ++j) {
			suma += deszcz[i][j];
		}
		printf("  %d\n", suma);

		// agregacja, by nie liczyc 2x
		srednia += suma;
	}

	// globalna srednia roczna
	printf("\nRoczna srednia wynosi %d mm\n\n", srednia/LATA);

	// srednie miesieczne
	printf("Srednie miesieczne:\n");

	// srednia miesieczna naglowki
	for (j = 0; j < MIESIACE; j++) {
		printf("%5s",miesiace[j]);
	}
	printf("\n");

	// srednia miesieczna oddzielacz
	for (j = 0; j < MIESIACE; j++) {
		printf("-----");
	}
	printf("\n");

	// srednia miesieczna wartosci
	for (j = 0; j < MIESIACE; j++) {
		srednia = 0; 
		for (i = 0; i < LATA; i++) {
			srednia += deszcz[i][j];
		}
		printf("%5d", srednia/LATA);
	}
	printf("\n");

	return 0;
}
