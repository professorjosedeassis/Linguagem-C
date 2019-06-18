#include <stdio.h>
#include <stdlib.h>
/*
 * usando variaveis - do tipo char 
 * desenvolvido por Caio Marcandali
 * 02/05/2016
 */

int main(int argc, char *argv[]) {
	

	//declarando uma variavel do tipo char ( tabela ascii)
	//nome -> nome da variavel [30] aceuta ate 30 caracteres
	
	char nome[30];	
	printf("digite o seu nome\n");
	// a linha abaixo captura o que foi digitado no console e armazena na variavel nome
	gets(nome);
	system("CLS");
	system("color 1e");
	// a linha abaixo concatena (juntar, unir) um texto com o conteudo da variavel nome
	// % -> S <- se refere ao tipo da variavel (char)
	printf("Bem vindo %s\n",nome);
	system("pause");
	return 0;
}
