///
///  campoeletrico.h
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

#ifndef BibCampoEletrico_h

#define BibCampoEletrico_h
#define K 8987551784.95// k = 1/(4*pi*(8,85418782*10^(-12))) = 8987551784.95

struct cargaR3{
    Vetor3 vet;
    float q;
};

typedef struct cargaR3 CargaR3;

struct vQua{
	CargaR3 ponto[4];
	float l;
};

struct vCub{
	CargaR3 ponto[8];
	float l;
};

typedef struct vQua VQua;
typedef struct vCub VCub;

void vQuaToString(VQua qua, char* buffer);


#endif /* BibCampoEletrico_h */
