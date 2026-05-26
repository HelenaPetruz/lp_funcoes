#include <stdio.h>

int somaN(int);

int main(){
    int n;
    scanf("%d", &n);
    printf("Soma: %d",  somaN(n));
}

int somaN(int n){
    if(n==1 || n==0){
        return n; //Caso trivial
    }
    return somaN(n-1)*n //Recursão
}