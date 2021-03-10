#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Exercício - Cálculo do IMC
	@author Professor José de Assis
	https://www.youtube.com/user/ProfessorJosedeAssis
	Desenvolva um aplicativo para calcular o valor do IMC.
	O aplicativo deverá exibir o valor do IMC e a classificação
	de acordo com a tabela do IMC.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	system("color 70");
	// 1ª Dica: Gerador de banner (http://www.network-science.de/ascii/)
	// 2ª Dica: Para imprimir o caractere \ usar \\
	printf(" ___ __  __  ____ \n");
	printf("|_ _|  \\/  |/ ___|\n");
	printf(" | || |\\/| | |    \n");
	printf(" | || |  | | |___ \n");
	printf("|___|_|  |_|\\____|\n");
	printf("\n");
	//variáveis
	float imc,peso,altura;
	//entrada
	printf("Digite o seu peso em Kg: ");
	scanf("%f",&peso);
	printf("Digite a sua altura em metros: ");
	scanf("%f",&altura);
	//processamento
	imc = peso / (altura * altura);
	//saída
	printf("IMC: %.2f\n", imc);
	/*
		Classificação de acordo com a tabela IMC.
		Usaremos uma estrutura ( if - else if - else ) para os intervalos.
		Neste tipo de estrutura se uma condição for verdadeira a instrução é
		executada e as demais condições não são analisadas.
		O else final será executado caso nenhuma condição seja verdadeira.
	*/
	if (imc < 17) {
		printf("Muito abaixo do peso\n");
	} else if (imc < 18.5) {
		printf("Abaixo do peso\n");
	} else if (imc < 25) {
		printf("Peso normal\n");
	} else if (imc < 30) {
		printf("Acima do peso\n");
	} else if (imc < 35) {
		printf("Obesidade I\n");
	} else if (imc < 40) {
		printf("Obesidade II (severa)\n");
	} else
		printf("Obesidade III (mórbida)\n");
	system("pause");
	return 0;
}
