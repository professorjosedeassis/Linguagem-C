#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

/* 
	Professor José de Assis
	Curso básico de Linguagem C
	Estudo do laço for - while
	Desenhando e animando uma árvore de natal
	Versão 3.0
*/

int i,j,star,tamanho;

//função para mudar a cor do texto
void mudarCor(int cor) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), cor);
}

int main(int argc, char *argv[]) {

	srand(time(NULL));

	printf("Feliz Natal!\n");
	printf("Tamanho: ");
	scanf("%d",&tamanho);

	while(1) { // laço infinito (animação)

		system("cls"); // limpa a tela
		
		//Laço principal que define o tamanho da árvore
		for (i=1; i<=tamanho; i++) {
			for (j=1; j<=tamanho-i; j++) {
				printf(" ");
			}
			for (star=1; star<=i*2-1; star++) {
				if(rand()%5 == 0) {
					int corBolas = (rand()%15) + 1;
					mudarCor(corBolas);
					printf("o");
				} else {
					mudarCor(10);
					printf("*");
				}
			}
			printf("\n");
		}

		// Base da árvore
		for (i=1; i<=2; i++) {
			for (j=1; j<=tamanho -1; j++) {
				printf(" ");
			}
			mudarCor(6);
			printf("|");
			printf("\n");
		}

		mudarCor(7);

		Sleep(500); // tempo do pisca (em ms)
	}

	return 0;
}

