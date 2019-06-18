
//----------------------------Área de Declarações ---------------------------------------
#include <stdio.h>
#include <stdlib.h>

/*
 * Entendendo funções, variáveis globais(públicas) e estrutura Switch Case
 * Author José de Assis sob a licença gpl
 * 06/05/2016
 */

//declarando funções
//void nome_da_função (void);
void windows(void);
void linux(void);

//declarando uma variável global (pública)
int opcao;

//----------------------------------------------------------------------------------------
int main(int argc, char *argv[])
{
	
	printf("Sistemas disponiveis:\n");
	printf("1. Windows\n");
	printf("2. Linux\n");		
	printf("Digite a opcao desejada: ");
	scanf("%d",&opcao);
	//estrutura switch case normalmente usada para opções
	switch(opcao)
	{
		// caso o conteúdo da variável opcao seja 1
		case 1:
		// chamar a função windows
		windows();	
		break;
		
		// caso o conteúdo da variável opcao seja 2
		case 2:
		// chamar a função linux
		linux();		
		break;
		
		// caso contrário (qualquer número diferente de 1 e 2)
		// neste caso não usa o break
		default:
			printf("%d\n",opcao);//usado para apoio ao entendimento da lógica
			printf("Opcao invalida\n");
		
	}
	system("PAUSE");
	return 0;
}
//-------------------------------------Funções---------------------------------------

//Construindo a função Windows
void windows(void)
{
	system("CLS");
	system("COLOR 1F");
	printf("Escolhido a opcao %d\n",opcao);
	printf("Carregando o Windows...............\n");
} 

//Construindo a função Linux

void linux(void)
{
	system("CLS");
	system("COLOR 4E");
	printf("Escolhido a opcao %d\n",opcao);
	printf("Carregando o Linux....\n");
} 





