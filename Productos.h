#ifndef PRODUCTO_H
#define PRODUCTO_H

struct Producto{
	char nombre[50];
	char codigo[16];
	float precio;
	int cantidad;
	int estado;
	
};

int mostrarmenu();
void RegistrarProductos(struct Producto *inv, int N);
void MostrarProductos(struct Producto *inv, int N);
void Borradologico(struct Producto *inv, int N);

#endif
