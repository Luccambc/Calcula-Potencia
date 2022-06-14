#include <stdio.h>

// Criando uma função recursiva que retorna a potência de x elevado a y

int calcula_potencia(int base, int expoente){
    if(expoente == 0) {																				// Sabemos que qualquer número elevado a 0 é igual a 1 (2 ^ 0 = 1)
    	return 1;
	} else {
		return base * potencia(base, expoente - 1);													// Recursividade
	}      
}

int main () {

    int b, exp;
	
    printf("Digite o valor para a base: ");
    scanf("%d", &b);
    printf("Digite o valor para o expoente: ");
    scanf("%d", &exp);

    printf("\nResultado de %d elevado a %d: %d\n", b, exp, calcula_potencia(b, exp));

    return 0;
} 
