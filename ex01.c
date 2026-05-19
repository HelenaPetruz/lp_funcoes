#include <stdio.h>
#include <string.h>

int multiplicacao(int, int);

int main(){
    int a, b;
    printf("Digite a:");
    scanf("%d", &a);
    printf("Digite b:");
    scanf("%d", &b);
    printf("a x b = %d", multiplicacao(a, b));
}

int multiplicacao(int a, int b){
    int resultado=0;
    for(int i=0; i<a; i++){
        resultado+=b;
    }
    return resultado;
}