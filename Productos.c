#include "Productos.h"
#include <stdio.h>
#include <string.h>

int mostrarmenu(){
	int op;
	printf("--------------Menu----------- \n");
	printf("1. Resgistrar Producto \n");
	printf("2. Mostrar Producto \n");
	printf("3. Borrado logico \n");
	printf("4. Salir \n");
	printf("Ingrese la Opcion: ");
	scanf("%d",&op);
	return op;
}
void RegistrarProductos(struct Producto *inv, int N){
	int i;
	printf("Ingresar Productos \n");
	for(i=0;i<N;i++){
		printf("Producto N %d \n",i+1);
		printf("Ingrese el Nombre:");
		scanf("%s",inv[i].nombre);
		printf("Ingrese el codigo:");
		scanf("%s",inv[i].codigo);
		printf("Ingrese el precioc:");
		scanf("%f",&inv[i].precio);
		printf("Ingrese la cantidad:");
		scanf("%d",&inv[i].cantidad);
		inv[i].estado=1;
		
	}
	printf("Productos Ingresados Exitosamente\n");
	
}
void MostrarProductos(struct Producto *inv, int N){
	int i;
	char *estado2;
	printf("Reporte de Salida \n");
	printf("%-10s %-15s %-10s %-10s %s \n","CODIGO","NOMBRE","PRECIO","CANTIDAD", "ESTADO");
	printf("--------------------------------------------------------------\n");
	for(i=0;i<N;i++){
		if(inv[i].estado==1){
			estado2="activo";
		}else{
			estado2="Inactivo";
		}
		printf("%-10s %-15s %-9.2f %-10d %s \n", 
		inv[i].codigo,
		inv[i].nombre,
		inv[i].precio,
		inv[i].cantidad,
		estado2
		
		);
	}
	printf("Productos Mostados\n");
}

void Borradologico(struct Producto *inv, int N){
	char valorbuscado[16];
	int i;
	char *estado2;
	printf("ingrese el codigi a Buscar: ");
	scanf("%s",valorbuscado);
	for(i=0;i<N;i++){
		if(inv[i].estado==1 && strcmp(inv[i].codigo,valorbuscado)== 0){
			inv[i].estado=0;
			printf("valor inactivado \n");
			printf("%-10s %-15s %-10s %-10s %s \n","CODIGO","NOMBRE","PRECIO","CANTIDAD", "ESTADO");
			printf("--------------------------------------------------------------\n");
			if(inv[i].estado==1){
				estado2="activo";
			}else{
				estado2="Inactivo";
			}
			printf("%-10s %-15s %-9.2f %-10d %s \n", 
			inv[i].codigo,
			inv[i].nombre,
			inv[i].precio,
			inv[i].cantidad,
			estado2
			
			);
			break;
		}
	}
	if(i==N){
		printf("Producto no Encontrado \n");
	}
}

































