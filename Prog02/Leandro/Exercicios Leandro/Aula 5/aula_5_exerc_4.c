//Rafael Stefanini Carreira

/*Vários algoritmos em computação usam a técnica de “Dividir para
Conquistar”: basicamente eles fazem alguma operação sobre todos os
dados, e depois dividem o problema em problemas menores, repetindo
a operação. Uma equação de recorrência típica para esse tipo de
algoritmo é mostrada abaixo. Resolva essa equação de recorrência.
T(n) = 2T(n/2) + n;
T(1) = 1;
*/

#include <stdio.h>

double t(double n)
{
	if(n==1)
		return 1;
	else
		return 2*t(n/2) + n;
}
	
main()
{
	printf("\nEx: t(8)= %lf\n",t(8));
}
