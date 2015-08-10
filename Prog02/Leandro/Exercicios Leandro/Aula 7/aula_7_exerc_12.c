//Rafael Stefanini Carreira

/*O que há de errado com o seguinte trecho de código? */
#include <stdio.h>

main
{
char *a, *b; a = "abacate"; b = "amora";
if (*a < *b) printf( "%s vem antes de %s no dicionário", a, b);
else printf( "%s vem depois de %s no dicionário", a, b);
}


//R: Esta comparando somente os primeiros caracteres de cada string











