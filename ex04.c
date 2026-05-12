#include <stdio.h>

int ehPrimo(int);
int nPrimos(int, int);

int main(){
    int n;
    printf("N: ");
    scanf("%d", &n);
    if(ehPrimo(n)){
        printf("Primo");
    }
    else{
        printf("Não é primo");
    }
}

int ehPrimo(int n){
    if(n==1)
        return 0;
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int nPrimos(int n1, int n2){
    int cont=0;
    for(int i=n1+1; i<n2; i++){
        cont+=ehPrimo(i);
    }
    return cont;
}

/*int ehPrimo(int n){
    int cont=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cont++;
        }
    }
    if(cont==2)
        return 1;
    return 0;
}*/