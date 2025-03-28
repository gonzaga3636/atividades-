#include <stdio.h>

int main() {
    
    int num;
    
    printf("Escreva numero: ");
    scanf("%d", &num);
    
    if (num % 2 == 0 && num % 3 == 0) {
        printf("O número é divisível por 2 e por 3.\n");
    } else if (num % 2 == 0) {
        printf("O número é divisível apenas por 2.\n");
    } else if (num % 3 == 0) {
        printf("O número é divisível apenas por 3.\n");
    } else {
        printf("O número não é divisível nem por 2 nem por 3.\n");
    }
    
    return 0;
}
