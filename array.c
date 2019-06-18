#include <stdio.h>
#include <stdlib.h>

/* 
	Professor José de Assis
	Curso Básico de Linguagem C
	Aula 10 - Array (simples e multidimensional)
*/

int main(int argc, char *argv[]) {
	float nota1 = 8;
	float nota2 = 6;
	float nota3 = 9;
	float nota4 = 3;
	//exibindo o conteúdo da variável nota3 sem uso do array
	printf("Sem array\n");
	printf("Nota3: %.1f\n", nota3);
	//a linha abaixo cria um array de tamanho 4
	float notas[4]={8,6,9,3};
	printf("Com array\n");
	printf("Nota3: %.1f\n", notas[2]);
	//a linha abaixo modifica o conteúdo de um array
	notas[1]=7;
	printf("Modificando o conteudo do array\n");
	printf("Nota2: %.1f\n", notas[1]);
	//a linha abaixo cria um array de duas dimensões conforme boletim do aluno
	float boletim[2][4]={{8,7,9,3},{4,5,8,6}};
	//recuperando a nota de português do 1o bimestre
	printf("Array multidimensional\n");
	printf("Nota: %.1f\n",boletim[0][3]);
	system("pause");
	return 0;
}
