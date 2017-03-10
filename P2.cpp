#include <stdio.h>
#include <stdlib.h>

void llenar_datos();
void imprimir_datos();

int nFilas, nColumnas, nInicio **p_matriz;

int main(){
	llenar_datos();
	imprimir_datos();
	free(p_matriz);
	printf("\n\n");
	system("pause");
	return 0;
}

void llenar_datos(){

	printf("\t\tTAMAÑO DE MATRIZ\n");
	printf("\nIngrese Cantidad de Filas: ");
	scanf("%d", &nFilas);

	printf("\nIngrese Cantidad de Columnas: ");
	scanf("%d", &nColumnas);

	printf("\nIngrese Numero de Inicio para llenar la matriz: ");
	scanf("%d", &nInicio);

	p_matriz = (int **)malloc(nFilas * sizeof(int *));
	for(int i = 0; i < nColumnas; i++){
		p_matriz[i] = (int *)malloc(nColumnas * sizeof(int ));
	}
	if(p_matriz == NULL){
		printf("\nError Reservando Memoria\n");
		exit (1);
	}else{

		for(int f = 0; f < nFilas; f++){
			for(int c = 0; c < nColumnas; c++){
				&(*(*(p_matriz+c)+f)))=;
			}
		}
	}
}

void imprimir_datos(){

    printf("\n**********************************************\n");
    printf("\t\t\nMOSTRAR MATRIZ INGRESADA\n");
	printf("\nLa Matriz ingresada fue: \n\n");

	for(int f = 0; f < nFilas; f += 1){
		for(int c = 0; c < nColumnas; c++){
			printf(" %d ",*(*(p_matriz+c)+f));
		}printf("\n");
	}
    printf("\n**********************************************\n");
    printf("\t\t\n\nMOSTRAR MATRIZ TRASPUESTA\n\n");

	for(int f = 0; f < nFilas; f += 1){
		for(int c = 0; c < nColumnas; c++){
			printf(" %d ",*(*(p_matriz+f)+c));
		}printf("\n");
	}
}
