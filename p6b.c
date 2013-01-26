/**
 * 6. Napisz funkcję, której argumentem jest napis i która zwraca wskaźnik do pierwszego 
 * znaku nie będącego znakiem odstępu (nonwhite character) w podanym napisie. Przetestuj 
 * ją w prostym programie.
 */
#include <stdio.h>
#include <ctype.h>

char* ltrim(char *str);

int main(void)
{
	char* lancuch = "    lancuch    ";
	char* lancuch_bez = "lancuch";

	printf("lancuch przed: \"%s\"\n", lancuch);
	printf("lancuch po: \"%s\"\n", ltrim(lancuch));

	printf("lancuch bez przed: \"%s\"\n", lancuch_bez);
	printf("lancuch bez po: \"%s\"\n", ltrim(lancuch_bez));

	return 0;
}


/*
int isspace ( int c );

Check if character is a white-space
Checks whether c is a white-space character.

For the "C" locale, white-space characters are any of:
' '	(0x20)	space (SPC)
'\t'	(0x09)	horizontal tab (TAB)
'\n'	(0x0a)	newline (LF)
'\v'	(0x0b)	vertical tab (VT)
'\f'	(0x0c)	feed (FF)
'\r'	(0x0d)	carriage return (CR)
*/

char* ltrim(char *str)
{
	for (; *str && isspace(*str); str++) ;
	return str;
}