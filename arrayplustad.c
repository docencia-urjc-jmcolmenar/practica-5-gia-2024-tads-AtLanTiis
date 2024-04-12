//
// Created by Rafa on 12/04/2024.
//

#include "arrayplustad.h"
#include <stdlib.h>
#include <stdio.h>

ArrayPlusTAD *creaArrayPlus(int size) {
    ArrayPlusTAD *arrayPlus = (ArrayPlusTAD *) malloc(sizeof(ArrayPlusTAD));
    arrayPlus->array = (int*) malloc(size*sizeof(int));
    arrayPlus->capacidad = size;
    arrayPlus->numElems = 0;
    return arrayPlus;
}

int addElemento(ArrayPlusTAD *arrayPlus, int elemento) {
    if (arrayPlus->numElems == arrayPlus->capacidad) {
        printf("Array lleno. Elemento no agregado.\n");
        return -1;
    }

    arrayPlus->array[arrayPlus->numElems] = elemento;
    arrayPlus->numElems++;

    return 0;
}

void addArray(ArrayPlusTAD *arrayPlus, int *arrayElementos, int numElems) {
    for (int i = 0; i < numElems; ++i) {
        int j = addElemento(arrayPlus, arrayElementos[i]);

        if (j == -1) break;
    }
}

void imprimeArrayPlus(ArrayPlusTAD *arrayPlus) {
    if (arrayPlus->numElems == 0) {
        printf("Array vacio.\n");
    }

    for (int i = 0; i < arrayPlus->numElems; ++i) {
        printf("%i ", arrayPlus->array[i]);
    }

    printf("\n");
}

void vaciaArrayPlus(ArrayPlusTAD *arrayPlus) {
    arrayPlus->numElems = 0;
}

void liberaArrayPlus(ArrayPlusTAD *arrayPlus) {
    free(arrayPlus->array);
    free(arrayPlus);
}