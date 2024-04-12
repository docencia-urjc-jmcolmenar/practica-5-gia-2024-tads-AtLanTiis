//
// Created by Rafa on 12/04/2024.
//

#ifndef ARRAYSTAD_ARRAYPLUSTAD_H
#define ARRAYSTAD_ARRAYPLUSTAD_H

typedef struct {
    int *array;
    int capacidad;
    int numElems;
} ArrayPlusTAD;

ArrayPlusTAD *creaArrayPlus(int size);
int addElemento(ArrayPlusTAD *arrayPlus, int elemento);
void addArray(ArrayPlusTAD *arrayPlus, int *arrayElementos, int numNuevosElementos);
void imprimeArrayPlus(ArrayPlusTAD *arrayPlus);
void vaciaArrayPlus(ArrayPlusTAD *arrayPlus);
void liberaArrayPlus(ArrayPlusTAD *arrayPlusTad);

#endif //ARRAYSTAD_ARRAYPLUSTAD_H
