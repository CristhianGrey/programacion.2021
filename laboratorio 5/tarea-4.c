#include <stdio.h>

int main(){
    const float PI = 3.1415;
    float radio = 0;
    float perimetro = 0;
    float área = 0;
    printf("Hola por favor ingresar el valor de la circunferencia:\n");
    scanf("%f", &radio);
    perimetro = 2 * PI * radio;
    área = PI * radio *radio;
    printf("El resultado del perímetro es: %.2f\n", perimetro);
    printf("El resultado del área es: %.2f\n", área);
        return 0;
}