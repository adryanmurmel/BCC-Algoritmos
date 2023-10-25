#include <stdio.h> 

void soma(int a, int b);
void sub(int a, int b);
void mult(int a, int b); 
void divide(int a, int b); 

int main() { 
    int operacao, n1, n2; 

    printf("\nInsira dois numeros: ");
    scanf("%d %d", &n1, &n2);

    printf("Insira qual operacao voce quer: [ 1-SOMA || 2-SUBTRACAO || 3-MULTIPLICACAO || 4- DIVISAO ] :");
    scanf("%d", &operacao);

    if (operacao == 1) {
        soma(n1, n2);
    } else if (operacao == 2) {
        sub(n1, n2);
    } else if (operacao == 3) {
        mult(n1, n2);
    } else if (operacao == 4) {
        divide(n1, n2);
    } else {
        printf("\nNumero invalido!");
    }
    return 0;
}

void soma(int a, int b) {
    printf("\nA soma foi: %d", a+b);
}

void sub(int a, int b) {
    printf("\nA subtracao foi: %d", a-b);
}

void mult(int a, int b) {
    printf("\nA multiplicacao foi: %d", a*b);
}

void divide(int a, int b) {
        printf("\nA divisao foi: %.2f",(float)a/b);
}
