#include <stdio.h>

float calculaMedia(float a, float b){

    return (a + b) / 2;
}

int main() {

    float a, b, media;
    
    printf("Digite dois valores: ");
    scanf("%f%f", &a, &b);

    media = calculaMedia(a, b);

    printf("Media de %f e %f = %.2f", a, b, media);

    return 0;
}