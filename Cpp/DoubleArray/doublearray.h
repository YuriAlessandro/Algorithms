#ifndef DOUBLE_ARRAY_H
#define DOUBLE_ARRAY_H

#include <new>
using std::bad_alloc;

#include <stdexcept>
#include <iostream>

template< typename T >
void
DoubleArray ( T * &A, int &_sz )
{
    // 1) Alocar a nova memoria
	T *B = new T[_sz * 2];

    // 2) Copiar valores de A para o novo vetor
	for (auto i = 0; i < (_sz * 2); i++){
		B[i] = A[i];
	}

    // 3) Liberar a memoria associada ao ponteiro A
	 delete [] A;

    // 4) Fazer o A apontar p/ a nova memoria
	 A = B;

    // 5) Atualizar o novo tamanho do arranjo A.
    _sz *= 2;
}

#endif

/* ------------------- [ End of the doublearray.h source ] ------------------- */
/* =========================================================================== */
