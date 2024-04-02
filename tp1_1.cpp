#include <stdio.h>


int main(){
    int variable=5;
    int *puntero=&variable;
    printf("El contenido del puntero es: %d \n", *puntero);
    printf("La dirección de memoria almacenada por el puntero es: %p \n", &puntero);
    printf("La dirección de memoria almacenada por la variable es: %p \n", &variable);
    printf("La dirección de memoria del puntero es: %p \n", puntero);
    printf("La dirección de memoria del puntero es: %d bytes", sizeof(variable));
}

/*e) Declare un puntero en el procedimiento principal que apunte a una
variable de algún tipo y muestre por pantalla lo siguiente:
1) El contenido del puntero
2) La dirección de memoria almacenada por el puntero.
3) la dirección de memoria de la variable.
4) la dirección de memoria del puntero.
5) el tamaño de memoria utilizado por esa variable usando la
función sizeof()*/