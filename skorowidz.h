#ifndef SKOROWIDZ_H
#define SKOROWIDZ_H
#include <stdio.h>
#include <stdlib.h>
#include "strstr.h"

#define BUFSIZE 8192

int static num_of_columns = 10;
int static num_of_rows;


/*alokuje pamiec dla tablicy dwuwymiarowej, gdzie indeksy wierszy odpowiadaja poszczegolnym wyszukiwanym slowa, a indeksy kolumn kolejnym linia w badanym tekscie.Pierwsza wartsc jest zawsze libczba wystopienia danego slowa */
int **init_words_in_lines(int n);    

/*sprawdza czy dane slowo wystepuje w poszczegolnych liniach pliku. I zapisuje wktore slowo wystapilo w ktorej lini. Jezeli braknie miejsca na kolejne linie w tablicy "lines" realokowana jest dodatkowa pamiec */
void words_in_lines(FILE *in, int num_words, int **lines, char **words);

/*wypisuje numery lini w ktorych wystepowaly poszczegolne slowa*/
void print_words_in_lines(int num_of_words, int **lines, char **words);

#endif
