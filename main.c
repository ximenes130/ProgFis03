///
///  main.c
///
///
///  Aluno:      Luiz Eduardo Ximenes Neto
///  disciplina: F�sica
///  turma:      A
///  semestre:   3�
///  matr�cula:  141057600015
///
///  Copyright � 2016 Luiz Eduardo Ximenes Neto. All rights reserved. blah
///

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "vetor.h"
#include "campoeletrico.h"

char _respostas[255];

void lerDados(VQua* qua){
    int i;

    system("cls");

    printf("\n  ----------  INFORME OS DADOS DO QUADRADO ---------\n\n\n\n");

    printf("  L = ");
    scanf("%f",&(qua->l));

    qua->ponto[0]->vet->x = 0.0;
    qua->ponto[0]->vet->y = 0.0;
    qua->ponto[0]->vet->z = 0.0;

    qua->ponto[1]->vet->x = qua->l;
    qua->ponto[1]->vet->y = 0;
    qua->ponto[1]->vet->z = 0;

    qua->ponto[2]->vet->x = 0;
    qua->ponto[2]->vet->y = qua->l;
    qua->ponto[2]->vet->z = 0;

    qua->ponto[3]->vet->x = qua->l;
    qua->ponto[3]->vet->y = qua->l;
    qua->ponto[3]->vet->z = 0;

    for(i=0 ; i<4 ; i++){
        printf("  q%d = ",i+1);
        scanf("%f",&(qua->ponto[i]->q));
    }

    vQuaToString(*qua, _respostas);
}

void menu(){
    char controle;
    VQua qua;

    qua.ponto[0].q = 0;
    qua.ponto[1].q = 0;
    qua.ponto[2].q = 0;
    qua.ponto[3].q = 0;
    qua.l          = 0;

    // Exibe o menu enquanto o usu�rio n�o aperta esc (27)
    do{
        system("cls");
        printf("\n\n");
        printf("     ##############################\n");
        printf("     #                            # \n");
        printf("     #   Programa de Fisica III %f  # \n",K);
        printf("     #                            # \n");
        printf("     ##############################\n\n\n");

        printf("     1 - Popular dados \n");
        printf("     2 - Vetor campo eletrico gerado individualmente\n");
        printf("         por cada carga pontual no ponto C\n");
        printf("     3 - Vetor campo eletrico resultante no ponto C \n");
        printf("     4 - Vetor campo eletrico resultante em um ponto\n");
        printf("         a uma distancia D na linha perpendicular ao\n");
        printf("         centro do quadrado \n\n");
        printf("   esc - Encerra o programa\n\n\n");

        printf("%s\n",_respostas);
        strcpy(_respostas,"");

        controle = getch();

        switch(controle){
        case '1':
            lerDados(&qua);
            break;
        case '2':
            break;
        case '3':
            break;
        case '4':
            break;
        }

    }while(controle != 27);

}

int main(){

    menu();

    return -1;
}
