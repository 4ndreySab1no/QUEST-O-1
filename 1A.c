#include <stdio.h>
#include <stdlib.h>

int main (){

	int i, a, cont, v[10] = {33, 71, 75, 10, 29, 55, 74, 73, 65, 19};

	printf("\tValores desordenados:\n");
	for (i = 0; i < 10; i++){
		printf("%4d", v[i]);
	}
	printf("\n\tValores ordenados:\n");
	//BubbleSort
		for (cont = 0; cont < 10; cont++){//Percorrer o vetor
			for (i = 0; i < 9; i++){
				if (v[i] > v[i+1]){//Se o valor escolhido for maior do que o proximo
					a = v[i];//Armazena o valor do indice na variavel 'a'
					v[i]= v[i+1];
					v[i+1]= a;//Coloca o valor no espaço seguinte
					}
			}
		}

	//Imprimindo o vetor ordenado 
	for (i = 0; i < 10; i++){
		printf("%4d", v[i]);
	}

}
