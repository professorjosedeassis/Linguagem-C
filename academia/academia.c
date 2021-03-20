#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**
 *	Sistema de Gestão de Academias
 *	Estudo das variáveis
 *  Estudo das estruras de controle condicional
 *	@author José de Assis
 *	@version 3.0
 */

int main(int argc, char *argv[]) {
	// Setar idioma português para impressão de texto
	setlocale(LC_ALL,"Portuguese");
	setlocale(LC_NUMERIC, "pt-BR");
	// Tipos de variáveis
	char professor[30] = {"José de Assis"}; //[30] -> máximo de 30 caracteres
	char personal = 's';
	int periodo = 1;
	float cargaHoraria = 30.5;
	double salario = 3500.65;
	printf("    /\\                | |              (_)   \n");   
	printf("   /  \\   ___ __ _  __| | ___ _ __ ___  _  __ _ \n");
	printf("  / /\\ \\ / __/ _` |/ _` |/ _ \\ '_ ` _ \\| |/ _` |\n");
	printf(" / ____ \\ (_| (_| | (_| |  __/ | | | | | | (_| |\n");
	printf("/_/    \\_\\___\\__,_|\\__,_|\\___|_| |_| |_|_|\\__,_|\n");
    printf("\n");                                            
	printf(" _____  _     _     _           _ \n");
	printf("|  __ \\| |   (_)   (_)         | |\n");
	printf("| |__) | |__  _ ___ _  ___ __ _| |\n");
	printf("|  ___/| '_ \\| / __| |/ __/ _` | |\n");
	printf("| |    | | | | \\__ \\ | (_| (_| | |\n");
	printf("|_|    |_| |_|_|___/_|\\___\\__,_|_|\n");
	printf("\n");
	//Menu de opções
	int opcao;
	printf("______________________________________________________________\n\n");
	printf("1. Gestão de funcionários\n");
	printf("2. Cadastrar aluno\n");
	printf("3. Sobre\n");
	printf("\n");
	printf("Digite a opção desejada: ");
	scanf("%d",&opcao);
	switch(opcao) {
		case 1:
			system("cls");
			printf("GESTÃO DE FUNCIONÁRIOS\n");
			printf("_____________________________\n");
			// %s -> Ler o tipo de variável
			// , (vírgula) concatenar(unir) um texto com o conteúdo da variável
			printf("Professor: %s\n", professor);
			printf("Personal Trainer(s/n): %c\n", personal);
			printf("Período: %d\n", periodo);
			// .1 antes de %f arredonda para 1 casa decimal
			printf("Carga horária semanal: %.1f\n", cargaHoraria);
			printf("Salário: R$ %.2lf\n", salario);
			printf("_____________________________\n");
		break;
		case 2:
			system("cls");
			//limpar o buffer (fluxo)
			fflush(stdin);
			//variáveis
			char aluno[50];
			char sexo;
			int idade;
			float peso, altura, imc;			
			// Entrada de dados
			printf("CADASTRO DE ALUNO \n\n");
			printf("Nome do aluno(a): ");
			// o comando gets é usado especificamente para capturar String (char[])
			gets(aluno);
			printf("Sexo(M/F): ");
			// o comando scanf é usado para capturar as demais variáveis
			// o símbolo &(amper) é usado para referenciar a memória
			scanf("%c",&sexo);
			printf("Idade: ");
			scanf("%d", &idade);
			printf("Peso(kg): "); //entrada
			// ATENÇÃO! Para capturar um número não inteiro usar (,) vírgula
			scanf("%f", &peso);
			printf("Altura(m): "); //entrada
			scanf("%f", &altura);
			// processamento
			imc = peso / (altura * altura);
			printf("\n");
			system("pause");
			system("cls");
			// Setar idioma português para impressão de texto de uma variável
			setlocale(LC_ALL, "C");
			printf("Ficha do aluno(a):\n");
			printf("______________________________\n");
			printf("Aluno(a): %s\n", aluno);
			printf("Sexo: %c\n", sexo);
			printf("Idade: %d\n", idade);
			printf("Peso: %.2f\n", peso);
			printf("Altura: %.2f\n", altura);
			printf("______________________________\n");
			printf("IMC: %.2f\n",imc);
			// Setar idioma português para impressão de texto
			setlocale(LC_ALL,"Portuguese");
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
			printf("______________________________\n");			
		break;
		case 3:
			system("cls");
			printf("SISTEMA DE GESTÃO DE ACADEMIAS\n");
			printf("________________________________________\n");
			printf("Professor José de Assis\n");
			printf("Versão 3.0\n");			
			printf("Sob a licença MIT\n");
			printf("_________________________________________\n\n");
		break;
		default:
			printf("Opção inválida\n");
		break;					
	}
	system("pause");
	return 0;
}
