#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Exercício - Álcool ou Gasolina?
	@author Professor José de Assis
	https://www.youtube.com/user/ProfessorJosedeAssis
	Para carros flex é preciso ter cautela ao escolher o combustível
	na hora de abastecer. A principal diferença de preços e vantagens
	entre os dois combustíveis está na proporção preço X desempenho.
	Para o álcool ser mais vantajoso do que a gasolina, o preço do litro
	tem que custar até 70% do litro da gasolina.
	Baseado nestas informações desenvolva um aplicativo para determinar
	qual é o combustível mais vantajoso para abastecer.
	
	ALTERANDO O ARQUIVO
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	float alcool,gasolina;
	printf("Álcool x Gasolina\n");
	printf("Digite o valor do litro do álcool: ");
	scanf("%f",&alcool);
	printf("Digite o valor do litro da gasolina: ");
	scanf("%f",&gasolina);
	if (alcool < (0.7 * gasolina)) {
		printf("Abasteça com ÁLCOOL\n");
	} else {
		printf("Abasteça com GASOLINA\n");
	}
	system("PAUSE");
	return 0;
}
