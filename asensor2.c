#include <stdio.h>

void llamarAsensor() {
    int pisollama, pisoactual;
    printf("Ingrese el piso al cual desea llamar el asensor:\n");
    scanf("%d", &pisollama);
    do {
        printf("El elevador esta en el piso: %d\n", pisoactual);
        pisoactual += 1;
    } while (pisoactual != pisollama);

    if (pisollama == pisoactual) {
        printf("El elevador ya esta en su piso\n");
    }
}

void seleccionarPiso() {
    int pisollega, pisosube=0, i;
    printf("Ingrese el piso al cual desea llegar:\n");
    scanf("%d", &pisollega);
    for (i = 0; i <= pisollega; i++) {
        printf("El elevador esta en el piso: %d\n", pisosube);
        pisosube += 1;
    }
    if (pisosube == pisollega) {
        printf("El elevador llego al piso solicitado\n");
    }
}

void mostrarPisoActual() {
    int pisonume;
    printf("Seleccione el numero del piso en el que se encuentra:\n");
    scanf("%d", &pisonume);
    switch (pisonume) {
        case 0:
            printf("Usted se encuentra en la Planta Baja\n");
            break;
        case 1:
            printf("Usted se encuentra en el Primer Piso\n");
            break;
        case 2:
            printf("Usted se encuentra en el Segundo Piso\n");
            break;
        case 3:
            printf("Usted se encuentra en el Tercer Piso\n");
            break;
        case 4:
            printf("Usted se encuentra en el Cuarto Piso\n");
            break;
        case 5:
            printf("Usted se encuentra en el Quinto Piso\n");
            break;
        case 6:
            printf("Usted se encuentra en el Sexto Piso\n");
            break;
        case 7:
            printf("Usted se encuentra en el Septimo Piso\n");
            break;
        case 8:
            printf("Usted se encuentra en el Octavo Piso\n");
            break;
        case 9:
            printf("Usted se encuentra en el Noveno Piso\n");
            break;
        case 10:
            printf("Usted se encuentra en el Decimo Piso\n");
            break;
        default:
            printf("Seleccione un numero de piso valido\n");
    }
}
int main() {

    int seleccion;
    do {
        printf("Seleccione la opcion que desea:\n1. Llamar ascensor\n2. Seleccionar piso\n3. Mostrar piso actual\n4. Salir\n");
        scanf("%d", &seleccion);
        if (seleccion < 1 || seleccion > 4) {
            printf("Elija una opcion valida\n");
          }
    }
    while((seleccion<1)||(seleccion>4));

  
  switch(seleccion){
    
            switch (seleccion) {
                case 1:
                    llamarAsensor();
                    break;
                case 2:
                    seleccionarPiso();
                    break;
                case 3:
                    mostrarPisoActual();
                    break;
                case 4:
                    printf("Gracias por usar el elevador <3\n");
                    break;
            }
        }
return 0;
} 


