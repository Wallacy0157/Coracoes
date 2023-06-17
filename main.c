#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"
#include "rosa.h"
#include "verde.h"
#include "roxo.h"
#include "branco.h"
#include "azul.h"
#include "vermelho.h"
#include "fechado.h"

int main() {
	int i;
	char nome[20];
	textcolor(10);
	printf("Digite um nome: ");
	scanf("%s", &nome);
	
	for(i=1; i<999; i++){
	printf("%s", nome); textcolor(1);
	printf("%s", nome); textcolor(10);
	printf("%s", nome); textcolor(4);
	printf("%s", nome); textcolor(12);
	printf("%s", nome); textcolor(14);
	}

	coracaoRosa();
	coracaoVerde();
	coracaoRoxo();
	coracaoBranco();
	coracaoAzul();
	coracaoVermelho();
	coracaoFechado();
	
	getch(); 
}
