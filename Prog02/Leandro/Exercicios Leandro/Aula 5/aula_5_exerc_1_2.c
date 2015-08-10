//Rafael Stefanini Carreira

//versão iterativa do exerc 1

#include <stdio.h>

main()
{
	int num,i;
	int ant1=0,ant2=0,fibonacci=0;
	printf("Quantidade de números da sequencia: ");
	scanf("%d",&num);

	for(i=0;i<num;i++)
	{
		if(i==0)
		{
			fibonacci=0;
			ant2=0;
		}
		if(i==1)
		{
			fibonacci=1;
			ant1=1;
		}
		else
		{
			fibonacci=ant2+ant1;
			ant2=ant1;
			ant1=fibonacci;
		}
		printf("%d ",fibonacci);

	}

}

