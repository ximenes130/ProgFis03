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

struct vQua{
	float q[4];
	float l;
};

struct vCub{
	float q[8];
	float l;
};

typedef struct vQua VQua;
typedef struct vCub VCub;

#endif /* BibCampoEletrico_h */
