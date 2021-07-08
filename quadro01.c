#include<stdio.h>
#include<locale.h>
//BIBLIOTECAS ADICIONADAS

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int qtdalunos, i;
	
	printf("Digite a quantidade de alunos:\n");
	scanf(" %i", &qtdalunos);
	
	char nomes[qtdalunos][15];
	float nota1[qtdalunos];
	float nota2[qtdalunos];
	float media[qtdalunos];
	
	for(i=0;i<qtdalunos;i++){
		printf("Digite o nome do %iº aluno:\n", i+1);
		scanf(" %s", &nomes[i]);
		printf("Digite a primeira nota do aluno:\n");
		scanf(" %f", &nota1[i]);
		printf("Digite a segunda nota do aluno:\n");
		scanf(" %f", &nota2[i]);
		media[i] = (nota1[i] + nota2[i])/2;
	}
	printf("\n\n");
	printf("\t\t\t\tQUADRO DE NOTAS\n");
	printf("NOME \t\t\t 1º NOTA \t\t 2º NOTA \t\t MÉDIA\n");
	for(i=0;i<qtdalunos;i++){
		printf("%9s \t\t %.2f \t\t\t %.2f \t\t\t %.2f\n", nomes[i], nota1[i], nota2[i], media[i]);
	}
	
	return 0;
}
