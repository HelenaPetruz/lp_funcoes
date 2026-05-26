#include <stdio.h>

int maiorElemento(int [][4], int, int);
void matrizIdentidade(int [][4], int, int);

int main(){
    int m[3][4];
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("Insira um valor: ");
            scanf("%d", &m[i][j]);
        }
    }
    printf("Maior elemento: %d", maiorElemento(m, 3, 4));
    printf("MATRIZ:");
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    matrizIdentidade(m, 3, 4);
    printf("MATRIZ IDENTIDADE:");
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

int maiorElemento(int m[][4], int l, int c){
    int maior = m[0][0];
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            if(m[i][j]>maior)
                maior=m[i][j];
        }
    }
    return maior;
}

void matrizIdentidade(int m[][4], int l, int c){

    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            if(i==j)
                m[i][j]=1;
            else
                m[i][j]=0;
        }
    }
    return maior;
}