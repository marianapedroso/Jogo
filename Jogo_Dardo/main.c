#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char *argv[]){

    setlocale(LC_ALL,"");

    int X, Y;
    printf("Digite o valor da coordenada X:\n");
    scanf("%d",&X);
    printf("Digite o valor da coordenada Y:\n");
    scanf("%d",&Y);

    if ((X == 0 ) && (Y == 0)){
        printf("Parabéns!! Você acertou bem no meio, ganhou 10 pontos");

    }else if((X >= -1 && X <= 1) && (Y >= -1 && Y <= 1)){
            printf("Conseguiu acertar o alvo de 10 pontos");

    }else if((X >= -5 && X <= 5) && ( Y >= -5 && Y <= 5)){
            printf("Você conseguiu acertar o alvo de 5 pontos");

    }else if((X >= -10 && X <= 10) && (Y >= -5 && Y <= 10)){
            print("Acertou o alvo de 01 ponto");
    }
    return 0;

}
