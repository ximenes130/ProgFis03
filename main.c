///
///  main.c
///
///
///  Aluno:      Luiz Eduardo Ximenes Neto
///  disciplina: Física
///  turma:      A
///  semestre:   3º
///  matrícula:  141057600015
///
///  Copyright © 2016 Luiz Eduardo Ximenes Neto. All rights reserved.
///

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "vetor.h"

void popularVetores(Vetor3* a, Vetor3* b){
    system("cls");
    printf("Digite os valores do vetor A:\n");
    popularR3(a);
    printf("Digite os valores do vetor B:\n");
    popularR3(b);
    system("pause");
}

void produtoEscalar(Vetor3 a, Vetor3 b){
    system("cls");
    printf(" |A*B| = %.2f\n\n", fabs(produtoEscalarR3(a,b)));
    system("pause");
}

void produtoVetorial(Vetor3 a, Vetor3 b){
    system("cls");
    printf(" A x B = ");
    printVR3(produtoVetorialR3(a,b));
    printf("\n");
    system("pause");
}

void mvppfAB(Vetor3 a, Vetor3 b){
    system("cls");
    printf(" |A x B| = %.2f\n\n", moduloR3(produtoVetorialR3(a,b)));
    system("pause");
}

void somarVetores(Vetor3 a, Vetor3 b){
    system("cls");
    printf(" A + B = ");
    printVR3(somaR3(a,b));
    printf("\n");
    system("pause");
}

void produtoEscalarA(Vetor3 a, Vetor3 b){
    system("cls");
    printf("(A + B) * A = %.2f\n\n",produtoEscalarR3(somaR3(a,b),a));
    system("pause");
}

void produtoEscalarB(Vetor3 a, Vetor3 b){
    system("cls");
    printf("(A + B) * B = %.2f\n\n",produtoEscalarR3(somaR3(a,b),b));
    system("pause");
}



void menu(){
    Vetor3 a,b;

    a.x = 0;
    a.y = 0;
    a.z = 0;

    b.x = 0;
    b.y = 0;
    b.z = 0;

    char controle;

    system("cls");

    // Exibe o menu enquanto o usuário não aperta esc (27)
    do{
        system("cls");
        printf("\n\n");
        printf("                                    __   _              ___   ___  \n");
        printf("        _ __   _ _   ___   __ _    / _| (_)  ___  ___  |_ _| |_ _| \n");
        printf("       | '_ \\ | '_| / _ \\ / _` |  |  _| | | (_-< |___|  | |   | |  \n");
        printf("       | .__/ |_|   \\___/ \\__, |  |_|   |_| /__/       |___| |___| \n");
        printf("       |_|                |___/                                    \n");

        printf("\n                  --------------------------------------\n\n");

        printf("     1 - popular vetores \n");
        printf("     2 - Modulo do produto escalar entre A e B \n");
        printf("     3 - Vetor perpendicular originário do produto vetorial entra A e B \n");
        printf("     4 - Modulo do vetor perpendicular ao plano formado por A e B \n");
        printf("     5 - Vetor soma dos vetores A e B\n");
        printf("     6 - Produto escalar entre o resultado da opcao 5 e o vetor A \n");
        printf("     7 - Produto escalar entre o resultado da opcao 5 e o vetor B \n\n");
        printf("   esc - Encerra o programa\n\n\n");

        printf("Vetores: \n");
        printf("A");
        printVR3(a);
        printf("B");
        printVR3(b);

        controle = getch();

        switch(controle){
        case '1':
            popularVetores(&a,&b);
            break;
        case '2':
            produtoEscalar(a,b);
            break;
        case '3':
            produtoVetorial(a,b);
            break;
        case '4':
            mvppfAB(a,b);
            break;
        case '5':
            somarVetores(a,b);
            break;
        case '6':
            produtoEscalarA(a,b);
            break;
        case '7':
            produtoEscalarB(a,b);
            break;
        }

    }while(controle != 27);

}

int main(){

    menu();

    return -1;
}
