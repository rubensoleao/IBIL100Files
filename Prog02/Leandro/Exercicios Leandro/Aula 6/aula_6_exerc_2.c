//Rafael Stefanini Carreira

///////////////////////// INCOMPLETO /////////////////////////////////

/* Considere um vetor do tipo inteiro com 20.000 registros. O mesmo vetor deve
ser utilizado para comparar os tempos, em segundos, obtidos com os métodos
descritos previamente. Para isso, realize três testes:

Teste 1.
O vetor deve armazenar valores obtidos aleatoriamente. Qual método
proporcionou o menor tempo? E o menor número de comparações? E o menor
número de trocas? Considerando essas respostas, qual método foi o melhor?
Teste 2.
O vetor deve armazenar valores em ordem crescente. Qual método
proporcionou o menor tempo? E o menor número de comparações? E o menor
número de trocas? Considerando essas respostas, qual método foi o melhor?
O melhor método foi o mesmo do teste 1?
Teste 3.
O vetor deve armazenar valores em ordem decrescente. Qual método
proporcionou o menor tempo? E o menor número de comparações? E o menor
número de trocas? Considerando essas respostas, qual método foi o melhor?

O melhor método foi o mesmo do teste 1 ou do teste 2?
Qual é a conclusão? Apresente argumentos a partir da teoria apresentada em
aula.*/



#include <stdio.h>
#include <time.h>

clock_t inicio, fim;

void BubbleSort(int *A, int max, int *C, int *T, double *Temp)
{
    inicio = clock();
    int i, k, elemento, troca0 = 0, compara0 = 0;
    for (k = 1; k<max; k++)
    {
        for (i=max-1; i>=k; i--)
        {
            if (A[i-1] > A[i])
            {
                elemento = A[i-1];
                A[i-1]=A[i];
                A[i]=elemento;
                troca0++;
            }
            compara0++;
        }
    }
    fim = clock();
    C[0]=compara0;
    T[0]=troca0;
    Temp[0]=((fim-inicio)/(double)CLOCKS_PER_SEC);
}

void SelectionSort(int *A, int max, int *C, int *T, double *Temp)
{
    inicio = clock();
    int i, j, indice, elemento, troca1 = 0, compara1 = 0;
    for(i=0; i<max-1; i++)
    {
        indice=i;
        elemento=A[i];
        for(j=i+1; j<max; j++)
        {
            if (A[j]<elemento)
            {
                indice=j;
                elemento=A[j];
       		troca1++;

            }
            compara1++;
        }
       	troca1++;
        A[indice]=A[i];
        A[i]=elemento;
    }
    fim = clock();
    C[1]=compara1;
    T[1]=troca1;
    Temp[1]=((fim-inicio)/(double)CLOCKS_PER_SEC);
}

void InsertionSort(int *A, int max, int *C, int *T, double *Temp)
{
    inicio = clock();
    int k, i, elemento, troca2 = 0, compara2 = 0;
    for (k = 1; k < max; k++)
    {
        elemento = A[k];
        for (i = k-1; i >= 0 && elemento < A[i]; i--, compara2++)
        {
		A[i+1] = A[i];
		troca2++;
	}
        A[i+1]=elemento;
        troca2++;
    }
    fim = clock();
    C[2]=compara2;
    T[2]=troca2;
    Temp[2]=((fim-inicio)/(double)CLOCKS_PER_SEC);
}

void ShellSort(int *A, int max, int *C, int *T, double *Temp)
{
    inicio = clock();
    int h=1, elemento, k, i, troca3 = 0, compara3 = 0;
    do
    {
        h = 3*h + 1;
    }while (h < max);
    do
    {
        h /= 3;
        elemento = A[k];
        for (i = k-1; i >= 0 && elemento < A[i]; i--, compara3++)
        A[i+1] = A[i];
        A[i+1]=elemento;
        troca3++;
    }while (h != 1);
    fim = clock();
    C[3]=compara3;
    T[3]=troca3;
    Temp[3]=((fim-inicio)/(double)CLOCKS_PER_SEC);
}

void QuickSort(int *A, int esq, int dir)
{
    inicio = clock();
    int *C, *T;
    double *Temp;
    register int e, d, compara4 = 0, troca4 = 0;
    int elem, y;
    e = esq;
    d = dir;
    elem = A[(esq+dir)/2];
    do
    {
        while(A[e]<elem)
        e++;
        compara4++;
        while(elem<A[d])
        d--;
        compara4++;
        if(e<=d)
        {
            y = A[e];
            A[e] = A[d];
            A[d] = y;
            e++;
            d--;
            troca4++;
        }
    }while(e<=d);

    if(esq<d) QuickSort(A, esq, d);
    if(e<dir) QuickSort(A, e, dir);
    fim = clock();
    C[4]=compara4;
    T[4]=troca4;
    Temp[4]=((fim-inicio)/(double)CLOCKS_PER_SEC);
}

int main()
{
    int C[5], T[5], num;
    double Temp[5];
    int vetor1[20000], vetor2[20000], vetor3[20000], vetor4[20000], vetor5[20000], i, valor=1, vetor[20000];

    printf("\n\t\t1.Teste 1\n\t\t2.Teste 2\n\t\t3.Teste 3\n\t\t0.Sair\n");
    printf("\t\t");
    scanf("%d", &num);
    switch(num)
    {
        case 1:
            srand(time(NULL));
            for(i=0;i<20000;i++)
            {
                vetor1[i]=rand()%20000+1;
                vetor2[i]= vetor1[i];
                vetor3[i]= vetor1[i];
                vetor4[i]= vetor1[i];
                vetor5[i]= vetor1[i];
            }

            BubbleSort(vetor1, 20000, C, T, Temp);
            SelectionSort(vetor2, 20000, C, T, Temp);
            InsertionSort(vetor3, 20000, C, T, Temp);
            //ShellSort(vetor4, 30, C, T, Temp);
            //QuickSort(vetor5, vetor5[0], vetor5[29]);
            printf("\n");
           // for(i=0; i<20000; i++)
           // {
           //     printf("%d ", vetor1[i]);
           // }
           // printf("\n");
            for(i=0; i<3; i++)
            {
                printf("\n Comparações método %d: %d \n", i, C[i]);
                printf("Trocas método %d: %d \n", i, T[i]);
                printf("Tempo de Execução método %d: %f \n\n", i, Temp[i]);
	//	printf("\nstart: %f \nend: %f \nclock: %ld\n",(double)inicio,(double)fim,CLOCKS_PER_SEC);
            }
        break;
        case 2:
            for(i=0; i<20000; i++)
            {
                vetor[i]=valor;
                valor++;
            }

            BubbleSort(vetor, 20000, C, T, Temp);
            SelectionSort(vetor, 20000, C, T, Temp);
            InsertionSort(vetor, 20000, C, T, Temp);
            //ShellSort(vetor, 20000, C, T, Temp);
            //QuickSort(vetor, vetor[0], vetor[19999]);

            for(i=0; i<3; i++)
            {
                printf("\n Comparações método %d: %d \n", i, C[i]);
                printf("Trocas método %d: %d \n", i, T[i]);
                printf("Tempo de Execução método %d: %f \n", i, Temp[i]);
            }
        break;
        case 3:
            for(i=19999; i>=0; i--)
            {
                vetor[i]=valor;
                valor++;
            }

            BubbleSort(vetor, 20000, C, T, Temp);
            SelectionSort(vetor, 20000, C, T, Temp);
            InsertionSort(vetor, 20000, C, T, Temp);
            //ShellSort(vetor, 20000, C, T, Temp);
            //QuickSort(vetor, vetor[0], vetor[19999]);

            for(i=0; i<3; i++)
            {
                printf("\n Comparações método %d: %d \n", i, C[i]);
                printf("Trocas método %d: %d \n", i, T[i]);
                printf("Tempo de Execução método %d: %f \n", i, Temp[i]);
            }
        break;
        case 0:
            return 0;
        break;
        default:
            printf("Opção Inválida!");
    }

    return 0;
}
