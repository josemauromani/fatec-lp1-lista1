#include<stdio.h>

int main() {
	
	int primeiroNumero, segundoNumero, resultado = 0;

	printf("Entre com o primeiro numero: ", primeiroNumero);
	scanf("%i", &primeiroNumero);
	printf("Entre com o segundo numero: ", segundoNumero);
	scanf("%i", &segundoNumero);

	if (primeiroNumero < segundoNumero) {

		do {
			resultado = resultado + primeiroNumero;
			primeiroNumero++;
		} while (primeiroNumero <= segundoNumero);

		printf("soma de todos os numeros: %d", resultado);
		
	} else {
		
		printf("Primeiro numero tem que ser menor que o segundo numero..");
		
	}

}
