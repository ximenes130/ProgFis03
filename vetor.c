///
///  vetor.c
///  Versão 3.0
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

/// Soma /////////////////////////
Vetor2 somaR2(Vetor2 a, Vetor2 b){
    Vetor2 r;

    r.x = a.x+b.x;
    r.y = a.y+b.y;

    return r;
}

Vetor3 somaR3(Vetor3 a, Vetor3 b){
    Vetor3 r;

    r.x = a.x+b.x;
    r.y = a.y+b.y;
    r.z = a.z+b.z;

    return r;
}

/// Descrição: Somar lista de vetores ////////////////////////////////
Vetor2 somaListaR2(Vetor2* v, int tam){
    Vetor2 r;

    int i;

    r.x = 0;
    r.y = 0;

    for(i=0 ; i<tam ; i++){
        r = somaR2(r,v[i]);
    }
    return r;
}
Vetor3 somaListaR3(Vetor3* v, int tam){
    Vetor3 r;
    int i;

    r.x = 0;
    r.y = 0;
    r.z = 0;

    for(i=0 ; i<tam ; i++){
        r = somaR3(r,v[i]);
    }
    return r;
}

/// Descrição: Calcular Multiplicação por escalar ///////////////////
Vetor2 produtoPorEscalarR2(Vetor2 v, float f){
	Vetor2 r;

	r.x = v.x * f;
	r.y = v.y * f;

	return r;
}
Vetor3 produtoPorEscalarR3(Vetor3 v, float f){
	Vetor3 r;

	r.x = v.x * f;
	r.y = v.y * f;
	r.z = v.z * f;

	return r;
}

/// Modulo /////////////////////////
float moduloR2(Vetor2 v){
	float r;

	r = v.x * v.x;
	r += v.y * v.y;

	return sqrt(r);
}

float moduloR3(Vetor3 v){
	float r;

	r = v.x * v.x;
	r += v.y * v.y;
	r += v.z * v.z;

	return sqrt(r);
}

/// Descrição: Calcular Angulo em que cada vetor faz com o eixo x (φ)
///            e a posição do plano xy faz com o eixo x (θ).
/// Retorno:   Vetor em R2, cujo x = θ e y = φ.
Vetor2 angulosR3(Vetor3 v){
    Vetor2 r;

    // tan = CO/CA
    r.x = atan(v.y/v.x) * 57,29577951308232;

    r.y = atan((sqrt(v.y*v.y + v.x*v.x)) / v.z) * 57,29577951308232;

    return r;
}

/// Descrição: Calcular produto descalar entre dois vetores
float produtoEscalarR2(Vetor2 a, Vetor2 b){
    return (a.x*b.x) + (a.y*b.y);
}
float produtoEscalarR3(Vetor3 a, Vetor3 b){
    return (a.x*b.x) + (a.y*b.y) + (a.z*b.z);
}

/// Descrição: Calcular produto vetorial entre dois vetores
Vetor3 produtoVetorialR3(Vetor3 a, Vetor3 b){
    Vetor3 r;

    //  |rx ry rz|
    //  |ax ay az|
    //  |bx by bz|

    r.x = (a.y*b.z) - (a.z*b.y);
    r.y = (a.z*b.x) - (a.x*b.z);
    r.z = (a.x*b.y) - (a.y*b.x);

    return r;
}


//  Interface   ///////////////////////////////////////////////////////////////////////////////////////////////////////

/// Vetor unitario /////////////////////////
Vetor2 vUnitarioR2(Vetor2 v){
	return produtoPorEscalarR2(v, 1/moduloR2(v));
}

Vetor3 vUnitarioR3(Vetor3 v){
	return produtoPorEscalarR3(v, 1/moduloR3(v));
}

/// popular /////////////////////
void popularR2(Vetor2* v){
    printf("\tx:");
    scanf("%f",&v->x);
    printf("\ty:");
    scanf("%f",&v->y);
}
void popularR3(Vetor3* v){
    printf("\tx:");
    scanf("%f",&v->x);
    printf("\ty:");
    scanf("%f",&v->y);
    printf("\tz:");
    scanf("%f",&v->z);
}

/// Imprimir ////////////////////

void printVR2(Vetor2 v){
    printf("(%.2f  %.2f)\n",v.x,v.y);
}
void printVR3(Vetor3 v){
    printf("(%.2f  %.2f  %.2f)\n",v.x,v.y,v.z);
}
