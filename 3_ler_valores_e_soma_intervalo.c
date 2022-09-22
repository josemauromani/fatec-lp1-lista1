#include<stdio.h>

int main() {
	int primeiroNumero, segundoNumero, resultado = 0;

	printf("Entre com o primeiro numero: ", primeiroNumero);
	scanf("%i", &primeiroNumero);
	printf("Entre com o segundo numero: ", segundoNumero);
	scanf("%i", &segundoNumero);

	if (primeiroNumero > segundoNumero) {
		printf("Primeiro numero deve ser menor que o segundo");
		return 0;
	}

	while (primeiroNumero <= segundoNumero) {
		resultado += primeiroNumero;
		primeiroNumero++;
	}

	printf("soma de todos os numeros: %d", resultado);

}
