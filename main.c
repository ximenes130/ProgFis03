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

    qua->ponto[0]->vet->x = 0;
    qua->ponto[0]->vet->y = 0;
    qua->ponto[0]->vet->z = 0;

    qua->ponto[1]->vet->x = l;
    qua->ponto[1]->vet->y = 0;
    qua->ponto[1]->vet->z = 0;

    qua->ponto[2]->vet->x = 0;
    qua->ponto[2]->vet->y = l;
    qua->ponto[2]->vet->z = 0;

    qua->ponto[3]->vet->x = l;
    qua->ponto[3]->vet->y = l;
    qua->ponto[3]->vet->z = 0;

    for(i=0 ; i<4 ; i++){
        printf("  q%d = ",i+1);
        scanf("%f",&(qua->ponto[i]->q));
    }

    vQuaToString(*qua, _respostas);
}

    printf("     ----------  INFORME OS DADOS DO QUADRADO ---------");

    printf("  L = ");
    scanf("%f",&(qua->l));

    for(i=0 ; i<4 ; i++){

    }
}

void menu(){
    char controle;
    VQua qua;

    qua.q[0] = 0;
    qua.q[1] = 0;
    qua.q[2] = 0;
    qua.q[3] = 0;
    qua.l    = 0;


    // Exibe o menu enquanto o usuário não aperta esc (27)
    do{
        system("cls");
        printf("\n\n");
        printf("     ##############################\n");
        printf("     #                            # \n");
        printf("     #   Programa de Fisica III   # \n");
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
        }

    }while(controle != 27);

}

int main(){

    menu();

    return -1;
}
