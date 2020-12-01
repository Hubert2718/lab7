#include <stdio.h>  // wiadomo po co
#include <stdlib.h> 
#include "strstr.h"
#include "skorowidz.h"

#define MAXLINII 1000  // zakładamy, że słowo będzie wystepować w nie więcej, niż 1000 liniach

#define MAXSLOW 100     // skorowidz dla nie więcej, niż 100 słów

char *slowa[MAXSLOW];   // słowa do wyszukiwania
int ile_slow;

int
main( int argc, char **argv ) {
	int i;

	FILE *in= argc > 1 ? fopen( argv[1], "r" ) : stdin;

  for( i= 2; i < argc; i++ ) {
		slowa[ile_slow] = argv[i];
		ile_slow++;
	}

	if( ile_slow == 0 ) {

		fprintf( stderr, "%s: błąd: proszę podać słowa do wyszukiwania\n", argv[0] );
		return EXIT_FAILURE;
	}

	if( in == NULL ) {
		fprintf( stderr, "%s: błąd: nie mogę czytać pliku %s\n", argv[0], argv[1] );
		return EXIT_FAILURE;
	}
	
	
	int **lines;
	lines = init_words_in_lines(argc-2);
	words_in_lines(in, ile_slow, lines, slowa);	

	print_words_in_lines(ile_slow, lines, slowa);
	
	return EXIT_SUCCESS;
}
