//Rafael Stefanini Carreira

/*Considere uma matriz de N x 4 que armazena valores
correspondentes a 3 notas de provas de cada um dos N alunos
de uma turma. A matriz tem ainda um espaço para o
armazenamento, na quarta coluna, para a média de cada um
dos alunos nas três avaliações. Implemente as seguintes
funções:*/

#include <stdio.h>
#include <stdlib.h>


/*lernotas: função void que recebe como parâmetros uma matriz N x 4 e o valor
de N considerado. A matriz deve ser recebida como um ponteiro. Esta função
deverá ler e armazenar, nas 3 primeiras colunas da matriz, as 3 notas de
provas de cada um dos N alunos da turma. */

void lernotas(float **A, int n){
	int i, j;

	for(i=0;i < n;i++)
	{
		printf("\n------------------------------------\n");
		printf("\nAluno %d\n",i+1);
		for(j=0;j < 3;j++)
		{
			printf("\nNota %d: ",j+1);
			scanf("%f",&A[i][j]);
		}
		
	}
}


/*mediageral: função que retorna como resultado a média geral de uma turma
(média das médias dos alunos da turma). Esta função receberá como
parâmetros uma matriz N x 4 e o valor de N considerado. Além disso, sua
função deverá atualizar a 4a coluna da matriz para incluir a média de cada um
dos alunos nas três avaliações.*/


float mediageral(float **A, int n){

	float med=0;
	int i,j;

	for(i=0;i < n;i++)
	{
		A[i][4] = (A[i][0] + A[i][1] + A[i][2])/3;
		med += A[i][4];
	}

	med = med/n;
	return med;
}

/*mostrarmedias: esta função deverá receber como parâmetros uma matriz N x
4 e o valor de N considerado. Esta função deverá exibir os valores
armazenados na 4a coluna da matriz considerada.*/

void mostrarmedias(float **A, int n){

	int i,j;

	for(i=0;i < n;i++)
		printf("\nAluno %d\nMédia = %f\n",i+1,A[i][4]);
}

/*Além disso, faça um programa principal que utilize as funções
implementadas, na seguinte ordem: lernotas, mediageral e mostrarmedias.*/

main()
{
	int n, i;
	float **A;

	printf("Digite o numero de alunos: ");
	scanf("%d", &n);
	A = (float**) malloc (n*sizeof(float*));
	for(i = 0;i < 4;i++)
		A[i] = (float*) malloc(4*sizeof(float));

	lernotas(A,n);
	puts("-------------------------------------------");
	printf("\nMédia geral: %f\n",mediageral(A,n));
	mostrarmedias(A,n);

}
