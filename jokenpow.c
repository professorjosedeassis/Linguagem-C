#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Jogo Pedra Papel Tesoura
 * Author: José de Assis
 * 09/05/2016 
 */

int main(int argc, char *argv[])
{
	//declarando variáveis de apoio a lógica
	int jogador,computador;
	//lógica do jogador
	printf("____________Jo Ken Pow____________\n\n");
	printf("1. PEDRA\n");
	printf("2. PAPEL\n");
	printf("3. TESOURA\n");
	printf("Digite a opcao desejada: ");
	scanf("%d",&jogador);
	switch(jogador)
	{
		case 1:
			printf("Jogador escolheu PEDRA\n");
		break;
		
		case 2:
			printf("Jogador escolheu PAPEL\n");
		break;
		
		case 3:
			printf("Jogador escolheu TESOURA\n");
		break;
		
		default:
			printf("Opcao invalida\n");
	}
	// lógica do computador
	srand(time(NULL));
	computador=("%d",rand()%3+1); // esta linha atribui um número aleatório a variável computador
	switch(computador)
	{
		case 1:
			printf("Computador escolheu PEDRA\n");
		break;
		
		case 2:
			printf("Computador escolheu PAPEL\n");
		break;
		
		case 3:
			printf("Computador escolheu TESOURA\n");
		break;		
	}
	//lógica para determinar o vencedor
	if(jogador==computador)
	{
		printf("EMPATE\n");
	}
	else if ((jogador==1 && computador==3) || (jogador==2 && computador==1) ||
	(jogador==3 && computador==2))
	{
		printf("JOGADOR VENCEU\n");
	}
	else
	{
		printf("COMPUTADOR VENCEU\n");
	}
	
	system("PAUSE");
	return 0;
}










