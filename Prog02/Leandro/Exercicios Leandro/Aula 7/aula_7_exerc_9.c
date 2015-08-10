//Rafael Stefanini Carreira

/*O que há de errado com o seguinte trecho de código? */

char b[8], a[8];
strcpy( a, "abacate");
strcpy( b, "banana");
if (a < b)
	printf( "%s vem antes de %s no dicionário", a, b);
else
	printf( "%s vem depois de %s no dicionário", a, b);


//R: devemos utilizar a função strcmp para comparar 2 strings











