#include <stdio.h>

int main() {
    //Inicializamos variables y pedimos la opcion al usuario
    int opcion;
    float radio, lado1, lado2, altura;
    while (opcion != 1 && opcion != 2) {
        printf("Introdcuce una opcion:\n1.- Volumen de un cono \n2.- Volumen de un ortoedro ");
        printf("\nOpcion: ");
        scanf("%d", &opcion);
        if (opcion != 1 && opcion != 2) {
            printf("Opcion incorrecta, intentalo de nuevo\n");
        }
    }

    if (opcion == 1) {
        printf("\nIntroduce el radio del cono: ");
        scanf("%f", &radio);
        printf("\nIntroduce la altura: ");
        scanf("%f", &altura);
        float volCono = (3.1415 / 3) * (radio * radio) * altura;
        printf("%s %f", "Volumen del cono: ", volCono);
    }

    if (opcion == 2) {
        printf("\nIntroduce el lado 1: ");
        scanf("%f", &lado1);
        printf("\nIntroduce el lado 2: ");
        scanf("%f", &lado2);
        printf("\nIntroduce la altura: ");
        scanf("%f", &altura);
        float volOrtoedro = lado1 * lado2 * altura;
        printf("%s %f", "Volumen del ortoedro: ", volOrtoedro);
    }

    return 0;
}