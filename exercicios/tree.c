#include <stdio.h>
#include <stdlib.h>

/* 
	Professor José de Assis
	Curso básico de Linguagem C
	Estudo do laço for
	Desenhando uma árvore de natal
*/

int i,j,star,tamanho;

int main(int argc, char *argv[]) {
	printf("Feliz Natal!\n");
	printf("Tamanho: ");
	scanf("%d",&tamanho);
	printf("\n");
	//Laço principal que define o tamanho da árvore
	for (i=1; i<=tamanho; i++) {
		//laço que define o espaçamento
		for (j=1; j<=tamanho-i; j++) {
			printf(" ");
		}
		//laço que desenha a árvore
		for (star=1; star<=i*2-1; star++) {
			printf("*");
		}
		printf("\n");
	}	
	printf("\n");
	system("pause");
	return 0;
}
