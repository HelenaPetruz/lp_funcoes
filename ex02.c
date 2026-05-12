#include <stdio.h>

//void - não retorna nada
void imprimeMenu(){
    printf("\n1 - Menu:");
    printf("\n2 - Inserir:");
    printf("\n3 - Alterar:");
    printf("\n4 - ...");
    printf("\n5 - Sair:");
}

int main(){
    int op;
    while(op!=5){
        imprimeMenu();
        scanf  ("%d", &op);
    }
    
}