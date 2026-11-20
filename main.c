#include <stdio.h>
#include "Productos.h"
#include <stdlib.h>

int main(int argc, char** argv) {
	struct Producto  inv[3];
	int op,N=3;
	do{
		op=mostrarmenu();
		switch(op){
			case 1:
				RegistrarProductos(inv,N);
				break;
			case 2:
				MostrarProductos(inv, N);
				break;
			case 3:
				Borradologico(inv, N);
				break;
			case 4:
				printf("Saliendo \n");
				break;
			default :
			    printf("Opcion Invalida \n");
				break;
		}
		
	}while(op!=4);
	return 0;
}
