#include <stdio.h>
#include <windows.h>

#define TAM_NOME 12

int main() {

	char nome_pet[TAM_NOME];
	int fomedopet = 0;
	int alimento = 3;
	int x;

	printf("\n Digite o nome do seu novo pet:");
	fflush(stdin);
	fgets(nome_pet, TAM_NOME, stdin);

	system("cls");
	
	do {
		printf("\n ");
		printf("\nQuantidade de alimentos: %d", alimento);
		printf("\n ");
		printf("\nDigite 1 para alimentar seu pet com 1 alimento:");
		scanf_s("%d", &x);

		system("cls");
		switch (x) {
			printf("\nFome do seu pet: %d", fomedopet);
			printf("\nQuantidade de alimentos: %d", alimento);
		case 1:
			printf("\nVoce alimentou seu pet!");
			fomedopet++;
			alimento--;
			break;
		default:
			printf("\nVoce nao alimentou seu pet.");
		}
	} while (fomedopet != 3);

	printf("\n");
	printf("\nSeu pet, %s", nome_pet);
	printf("\n");

	printf("\nFome do pet: %d", fomedopet);
	printf("\nQuantidade de alimentos: %d", alimento);
	
	if (fomedopet >= 1) {
		printf("\n");
		printf("\nSeu pet esta feliz!");
	}
	else {
		printf("\n");
		printf("\nSeu pet nao esta feliz!");
	}
	return 0;
}