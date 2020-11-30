#include"strstr.h"


char *str_str(char *line, char *key)
{
        int i;
        int j, k;

        for(i = 0; *(line+i) != '\0'; i++) {
                for(j = i, k = 0; *(line+j) == *(key+k) && *(key+k) != '\0'; k++, j++) 
                        ;
                if(*(key+k) == '\0' && !isalpha(*(line+j)) )
                        return line + i;
        }
        return NULL;
}

