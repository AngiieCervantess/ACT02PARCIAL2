# ACT02PARCIAL2
Clase nodo en C++ (Completa)

// NodoClass.cpp: define el punto de entrada de la aplicación de consola.
// Angelica Cervantes A01410524
//Estructura de Datos
//Actividad1 Parcial2

#include "stdafx.h"

class nodeClass {

public:
	nodeClass(int n, nodeClass *next = NULL) {
		valor = n;
		next = next;
		last = last;
	}

private:
	int valor;
	nodeClass *next;
	nodeClass *last;

};
