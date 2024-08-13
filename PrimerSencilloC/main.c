//Calcular el área de un círculo dado su radio

#include <stdio.h>
#define PI 3.14159
int main(void) {                            //fc ppal no espera ningun parametro
    float radius, area;

    // Solicitar el radio del círculo al usuario
    printf("\n Ingrese el radio del circulo y luego presione enter: ");
    scanf("%f", &radius);           //%f - Se espera teclear un num float
                                          //&radius - Se guarda en la direccion de mem de la variable radius

    // Calcular el área del círculo
    area = PI * radius * radius;

    // Mostrar el resultado
    printf("El area del circulo con radio %.2f es: %.2f\n", radius, area);
                                            // %.2f - cantidad de digitos luego del punto decimal - f de float
                                            // \n inserta una nueva línea después de imprimir el texto
    return 0;
}
