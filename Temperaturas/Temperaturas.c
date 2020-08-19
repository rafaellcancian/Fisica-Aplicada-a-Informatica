#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Geral {
	int unidadeA,unidadeB,i;
}geral;

void Menu() {	
	printf("Qual unidade você quer converter? (uma das abaixo)\n\n1- Celsius\n2- Fahrenheit\n3- Kelvin\n\nResposta: ");
	scanf("%d", &geral.unidadeA);
	system("cls");
	
	switch (geral.unidadeA) {
		case 1: printf("Para qual unidade você quer que seja convertido? (uma das abaixo)\n\n2- Fahrenheit\n3- Kelvin\n\nResposta: "); break;
		case 2: printf("Para qual unidade você quer que seja convertido? (uma das abaixo)\n\n1- Celsius\n3- Kelvin\n\nResposta: "); break;
		case 3: printf("Para qual unidade você quer que seja convertido? (uma das abaixo)\n\n1- Celsius\n2- Fahrenheit\n\nResposta: "); break;
		default: {
			system("cls"); 
			printf("AVISO: Os valores inseridos são inválidos.\n\n");
			Intro();
			break;
		}
	}
	scanf("%d", &geral.unidadeB);
	system("cls");
	
	if (((geral.unidadeA == 1) && (geral.unidadeB == 1)) || ((geral.unidadeA == 2) && (geral.unidadeB == 2)) || ((geral.unidadeA == 3) && (geral.unidadeB == 3))) {
		system("cls"); 
		printf("AVISO: Os valores inseridos são iguais.\n\n");
		Intro();
	}
	else if (((geral.unidadeA != 1) && (geral.unidadeA != 2) && (geral.unidadeA != 3)) || ((geral.unidadeB != 1) && (geral.unidadeB != 2) && (geral.unidadeB != 3))) {
		system("cls"); 
		printf("AVISO: Os valores inseridos são inválidos.\n\n");
		Intro();
	}
}

void Corpo() {
	float valor;
	
	if ((geral.unidadeA == 1) && (geral.unidadeB == 2)) {
		printf("Você está convertendo CELSIUS para FAHRENHEIT.\n");
		printf("\nInsira o valor a ser convertido (°C): ");
		scanf("%f", &valor);
		
		valor = (valor * 1.8) + 32;
		
		printf("\nResultado: %.1f°F", valor);
	}
	else if ((geral.unidadeA == 1) && (geral.unidadeB == 3)) {
		printf("Você está convertendo CELSIUS para KELVIN.\n");
		printf("\nInsira o valor a ser convertido (°C): ");
		scanf("%f", &valor);
		
		valor = valor + 273.15;
		
		printf("\nResultado: %.1fK", valor);
	}
	else if ((geral.unidadeA == 2) && (geral.unidadeB == 1)) {
		printf("Você está convertendo FAHRENHEIT para CELSIUS.\n");
		printf("\nInsira o valor a ser convertido (°F): ");
		scanf("%f", &valor);
		
		valor = (valor - 32) / 1.8;
		
		printf("\nResultado: %.1f°C", valor);
	}
	else if ((geral.unidadeA == 2) && (geral.unidadeB == 3)) {
		printf("Você está convertendo FAHRENHEIT para KELVIN.\n");
		printf("\nInsira o valor a ser convertido (°F): ");
		scanf("%f", &valor);
		
		valor = ((valor - 32) / 1.8) + 273.15;
		
		printf("\nResultado: %.1fK", valor);
	}
	else if ((geral.unidadeA == 3) && (geral.unidadeB == 1)) {
		printf("Você está convertendo KELVIN para CELSIUS.\n");
		printf("\nInsira o valor a ser convertido (K): ");
		scanf("%f", &valor);
		
		valor = valor - 273.15;
		
		printf("\nResultado: %.1f°C", valor);
	}
	else if ((geral.unidadeA == 3) && (geral.unidadeB == 2)) {
		printf("Você está convertendo KELVIN para FAHRENHEIT.\n");
		printf("\nInsira o valor a ser convertido (K): ");
		scanf("%f", &valor);
		
		valor = ((valor - 273.15) * 1.8) + 32;
		
		printf("\nResultado: %.1f°F", valor);
	}
	printf("\n\n\n");
}

void Final() {
	int resposta;
	
	printf("Você deseja?\n1- Reiniciar\n2- Sair\n\nResposta: ");
	scanf("%d", &resposta);
	
	switch (resposta) {
		case 1: system("cls"); Intro(); break;
		case 2: exit(0); break;
		default: {
			system("cls"); 
			printf("AVISO: Os valores inseridos são inválidos.\n\n");
			Final();
			break;
		}
	}
}

Intro() {
	for (;;geral.i++) {
		Menu();
		Corpo();
		Final();
	}
	
	return 1;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Trabalho de Física aplicada à Informática\n\nGrupo: Rafael Cancian, Paulo Schaurich e Guilherme Kuhn\n\nPrograma criado para converter unidades de temperatura.\nPlataformas suportadas: Windows\n\n\n");
	system("pause");
	system("cls"); 
	
	Intro();
	
	return 0;
}
