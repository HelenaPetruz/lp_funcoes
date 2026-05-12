#include <stdio.h>
#include <string.h>

int fatorial(int);
int combinacoes(int, int);

int main(){
    int n, r;
    printf("N: ");
    scanf("%d", &n);
    printf("R: ");
    scanf("%d", &r);
    printf("Numero de combinações: %d", combinacoes(n, r));
}

int fatorial(int n){
    int fat=1;
    for(int i=n; i>0; i--){
        fat = fat * i;
    }
    return fat;
}

int combinacoes(int n, int r){
    return fatorial(n)/(fatorial(r)*fatorial(n-r));
}