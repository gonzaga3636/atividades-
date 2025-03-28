#include <stdio.h>

int main() {
    
    int num1,  num2;
    
    printf("Escreva numero 1: ");
    scanf("%d", &num1);
    
    printf("Escreva numero 2: ");
    scanf("%d", &num2);
    
    if(num1 < num2) {
        printf("A ordem crescente é: %d, %d\n", num1, num2);
    }
    else{
        printf("A ordem crescente é: %d, %d\n", num2, num1);
    }

    return 0;
}
