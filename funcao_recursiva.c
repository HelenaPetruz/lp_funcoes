#include <stdio.h>

int fatorial(int);

int main(){
    int n;
    scanf("%d", &n);
    printf("Fatorial: %d", fatorial(n));
}

int fatorial(int n){
    if(n==1 || n==0)  //Caso trivial
        return 1; 
    return n*fatorial(n-1);  //Recursão
}