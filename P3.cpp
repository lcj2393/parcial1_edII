#include <stdio.h>
#include <stdlib.h>

void pedir_datos();
void imprimir_datos();

int nFilas, nColumnas, **p_matriz;

int main(){
	pedir_datos();
	imprimir_datos();
	free(p_matriz);
	printf("\n\n");
	system("pause");
	return 0;
}

void pedir_datos(){

	printf("\t\tTAMAÑO DE MATRIZ\n");
	printf("\nIngrese Cantidad de Filas: ");
	scanf("%d", &nFilas);

	printf("\nIngrese Cantidad de Columnas: ");
	scanf("%d", &nColumnas);

	p_matriz = (int **)malloc(nFilas * sizeof(int *));
	for(int i = 0; i < nColumnas; i++){
		p_matriz[i] = (int *)malloc(nColumnas * sizeof(int ));
	}
        printf("\n**********************************************\n");
		printf("\t\t\nLLENADO DE MATRIZ \n");
		for(int f = 0; f < nFilas; f++){
			for(int c = 0; c < nColumnas; c++){
				printf("\nIngrese dato para posicion [%d,%d]: ", f, c);
				scanf("%d", &(*(*(p_matriz+c)+f)));
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
