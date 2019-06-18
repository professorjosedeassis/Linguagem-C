#include <stdio.h>
#include <stdlib.h>

/*
 * Cálculo da média
 * Desenvolvido por José de Assis
 * Sob a licença GPL (Licença padrão para software livre)
 * 04/05/2016
 */

int main(int argc, char *argv[])
{
	// a linha abaixo declara variáveis numéricas reais(casas decimais)
	float nota1,nota2,media;
	//entrada
	printf("Digite a nota1: ");
	//leia e armazene na variável nota1
	//&nota1 -> particularidade da linguagem C para armazenar valores na variável
	scanf("%f",&nota1);
	printf("Digite a nota2: ");
	scanf("%f",&nota2);
	//processamento
	media=(nota1+nota2)/2;
	//saída
	//a vírgula concatena(junta) um texto com o conteúdo da variável media
	//%.1f -> arredondamento para uma casa decimal
	//%.2f -> arredondamento para duas casas decimais
	printf("Resultado: %.1f\n",media);
	//lógica para determinar se o aluno está aprovado ou reprovado
	if(media < 2)
	{
		printf("Aluno REPROVADO\n");
	}
	else if (media >= 6)
	{
		printf("Aluno APROVADO\n");
	}
	else
	{
		printf("Aluno RECUPERACAO\n");
	}
	system("PAUSE");
	return 0;
}










