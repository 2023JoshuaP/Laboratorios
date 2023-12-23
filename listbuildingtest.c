#include "linkedlist.h"
#include <stdlib.h>
/*
Esta funcion pone a prueba como es que se demuestra los 3 pasos para agregar
un unico nodo al frente de una lista enlazada:

 - Asignar: Asignar el nuevo nodo en el monton y establecer sus datos (.data) 
 en lo que deba almacenarse.

 - Enlace Siguiente: Configurar el puntero .next del nodo nuevo para que apunte
 al primer nodo actual. Es decir, esto es lo asignacion de puntero ("Asignar un 
 puntero a otro hace que apunten a la misma cosa").

 - Encabezado de Enlace: Cambiar el puntero del encabezado para apuntar al nuevo
 nodo, de modo que ahora sea el primer nodo.
*/

void LinkTest() {
	struct node* head = BuildTwoThree();

	/* Primer Paso */
	struct node* newNode;

	newNode = malloc(sizeof(struct node));
	newNode -> data = 1;

	/* Segundo Paso */
	newNode -> next = head;

	/* Tercer Paso */
	head = newNode;
}
