#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

/* 
	Professor Jos� de Assis
	Curso b�sico de Linguagem C
	Estudo do la�o for
	Desenhando uma �rvore de natal
	Vers�o 2.0
*/

int i,j,star,tamanho;

//fun��o para modificar a cor do texto
void mudarCor(int cor) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),cor);
}

int main(int argc, char *argv[]) {
	//iniciar o gerador de n�meros aleat�rios
	srand(time(NULL));
	printf("Feliz Natal!\n");
	printf("Tamanho: ");
	scanf("%d",&tamanho);
	printf("\n");
	//La�o principal que define o tamanho da �rvore
	for (i=1; i<=tamanho; i++) {
		//la�o que define o espa�amento
		for (j=1; j<=tamanho-i; j++) {
			printf(" ");
		}
		//la�o que desenha a �rvore
		for (star=1; star<=i*2-1; star++) {
			//sorteio de 5 n�meros (0 1 2 3 4)
			if (rand()%5 == 0) {
				int cor = (rand()%15)+1; // 1...15
				mudarCor(cor);
				printf("o");
			} else {
				mudarCor(10);
				printf("*");
			}
		}
		printf("\n");
	}
	//La�o que desenha o tronco da �rvore
	for (i=1; i<=2; i++) {
		for (j=1; j<=tamanho-1; j++) {
			printf(" ");
		}
		mudarCor(6);
		printf("|");
		printf("\n");
	}
	mudarCor(7);	
	printf("\n");
	system("pause");
	return 0;
}
