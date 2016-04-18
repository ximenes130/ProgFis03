///
///  campoeletrico.c
///  Versão 1.0
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
#include <math.h>
#include "vetor.h"
#include "campoeletrico.h"

void vQuaToString(VQua qua, char* buffer){
    sprintf(buffer, "   L = %f\n   q1 = %f\n   q2 = %f\n   q3 = %f\n   q4 = %f\n",qua.l,qua.ponto[0].q,qua.ponto[1].q,qua.ponto[2].q,qua.ponto[3].q);
}

