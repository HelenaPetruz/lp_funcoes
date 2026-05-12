#include <stdio.h>
#include <string.h>

//interfaces:
int soma(int, int);
int ehLetra(char);
int ehVogal(char);
int ehConsoante(char);

//função principal
int main(){
    int x=1, y=2, z;
    z = soma(x, y);


    char texto[30];
    int contLetra=0, contVogal = 0, contConsoante =0;

    printf("Texto: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strlen(texto)-1] = '\0';

    for(int i=0; i<strlen(texto); i++){
        /*if(ehLetra(texto[i])) //se é verdadeiro, ou seja, ==1
            contLetra++;*/
        contLetra+=ehLetra(texto[i]); //se for letra, retorna 1, soma 1, senão soma 0.
        contConsoante+=ehConsoante(texto[i]);
        contVogal+=ehVogal(texto[i]);
    }
    printf("\nLetras: %d ", contLetra);
    printf("\nConsoantes: %d ", contConsoante);
    printf("\nVogais: %d ", contVogal);

    return 0;
}

//implementações das funções: 

int soma(int n1, int n2){ //passagem de parâmetro por valor = declara e inicializa as variáveis (para tipos básicos)
    return n1+n2;
}

int ehLetra(char l){
    if((l>='A' && l<= 'Z') || (l>='a' && l<='z'))
        return 1;
    return 0; //se a condição for falsa, não precisa do else
}

int ehVogal(char l){
    if(ehLetra(l)){
        if(l=='a' || l=='e' || l=='i' || l== 'o' || l== 'u' || l=='A' || l=='E' || l=='I' || l=='O' || l=='U')
            return 1;
        return 0;
    }
    return 0;
}

int ehConsoante(char l){
    if(ehLetra(l)){
        if(!ehVogal(l)) //se não é vogal
            return 1;
        return 0;
    }
    return 0;    
    
}