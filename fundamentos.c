#include <stdio.h>
#include <stdlib.h>
// a linha abaixo "chama" a biblioteca responsável por codificação da linguagem
// para o português
#include <locale.h>

/* Linguagem C - Aula2 - Fundamentos */

int main(int argc, char *argv[])
{
	//setando a biblioteca para português
	setlocale(LC_ALL,"Portuguese");
	//a linha abaixo muda a cor do fundo e da fonte (fundo fonte)
	system("COLOR 2E");
	printf("Olá Mundo\n");
	system("PAUSE");
	//a linha abaixo limpa a tela
	system("CLS");
	printf("Professor José de Assis\n");
	system("PAUSE");
	return 0;
}





