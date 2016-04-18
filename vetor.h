///
///  vetor.h
///  Versão 2.0
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

#ifndef BibConjunto_h
#define BibConjunto_h

#endif /* BibConjunto_h */

struct vetor2{
	float x;
	float y;
};

struct vetor3{
	float x;
	float y;
	float z;
};

typedef struct vetor2 Vetor2;
typedef struct vetor3 Vetor3;

// ///////////////////////
// Operações vetoriais  //
// ///////////////////////

/// Descrição: Somar dois vetores distintos
Vetor2 somaR2(Vetor2 a, Vetor2 b);
Vetor3 somaR3(Vetor3 a, Vetor3 b);

/// Descrição: Somar lista de vetores
Vetor2 somaListaR2(Vetor2* a, int tam);
Vetor3 somaListaR3(Vetor3* a, int tam);

/// Descrição: Calcular o modulo de 1 vetor
float moduloR2(Vetor2 v);
float moduloR3(Vetor3 v);

/// Descrição: Calcular Angulo em que cada vetor faz com o eixo x (φ)
///            e a posição do plano xy faz com o eixo x (θ).
/// Retorno:   Vetor em R2, cujo x = φ, e y = θ.
Vetor2 angulosR3(Vetor3 v);

/// Descrição: Calcular Multiplicação por escalar
Vetor2 produtoPorEscalarR2(Vetor2 v, float f);
Vetor3 produtoPorEscalarR3(Vetor3 v, float f);

/// Descrição: Calcular o vetor unitário de 1 vetor
Vetor2 vUnitarioR2(Vetor2 v);
Vetor3 vUnitarioR3(Vetor3 v);

/// Descrição: Calcular produto descalar entre dois vetores
float produtoEscalarR2(Vetor2 a, Vetor2 b);
float produtoEscalarR3(Vetor3 a, Vetor3 b);

/// Descrição: Calcular produto vetorial entre dois vetores
Vetor3 produtoVetorialR3(Vetor3 a, Vetor3 b);

// ///////////////////
// Input || Output  //
// ///////////////////

/// Descrição: Preenche componentes de vetor
void popularR2(Vetor2* v);
void popularR3(Vetor3* v);

void printVR3(Vetor3 v);
