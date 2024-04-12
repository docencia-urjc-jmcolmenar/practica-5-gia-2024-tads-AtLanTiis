/*
 * Partiendo de este código, implementa las funciones del TAD ArrayPlus en los archivos arrayplustad.h
 * y arrayplustad.c.
 * Descomenta progresivamente el código del archivo main.c y comprueba que el programa funciona correctamente.
 */

#include "arrayplustad.h"
#define TAM 5

/*
 * Programa para demostrar el uso del TAD ArrayPlus.
 */
int main() {
    // Crea el ArrayPlus vacío
    ArrayPlusTAD *miArrayPlus = creaArrayPlus(TAM * 2);

    // Añade un elemento al ArrayPlus
    addElemento(miArrayPlus, 8);

    // Rellena el ArrayPlus con valores individuales
    for (int i = 0; i < TAM; i++) {
        addElemento(miArrayPlus, i);
    }

    // Añade varios elementos al ArrayPlus
    int arrayAux[] = {15, 64, 27, 99};
    addArray(miArrayPlus, arrayAux, 4);

    // Muestra el contenido del ArrayPlus
    imprimeArrayPlus(miArrayPlus);

    // Vacía el array
    vaciaArrayPlus(miArrayPlus);

    // Muestra el contenido del ArrayPlus
    imprimeArrayPlus(miArrayPlus);

    // Libera la memoria del ArrayPlus
    liberaArrayPlus(miArrayPlus);

    return 0;
}
