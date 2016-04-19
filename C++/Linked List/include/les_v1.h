/*!
 * @file les_v1.h
 *
 * @description
 * Conjunto de funções básicas para criação e manipulação
 * de listas encadedas simples.
 *
 * @author	Selan R dos Santos, <selan.rds@gmail.com>
 * @date	2015, updated 2015-04-15
 *
 */

#ifndef __LES_V1_H__
#define __LES_V1_H__

struct SLLNode {        // Struct for a Single Linked List Node.
     int miData;        // List stores integers.
     SLLNode * mpNext;  // Points to next node in list.
 };

typedef struct SLLNode * SNPtr; // Defining a new type.

void print( SNPtr _pAIL );
int length( SNPtr _pAIL );
bool empty( SNPtr _pAIL );
void clear( SNPtr & _pAIL );
bool front( SNPtr _pAIL, int & _retrievedVal );
bool back( SNPtr _pAIL, int & _retrievedVal );
bool pushFront( SNPtr & _pAIL, int _newVal );
bool pushBack( SNPtr & _pAIL, int _newVal );
bool popFront( SNPtr & _pAIL, int & _retrievedVal );
bool popBack( SNPtr & _pAIL, int & _retrievedVal );
SNPtr find( SNPtr _pAIL, int _targetVal );
bool insert( SNPtr & _pAIL, SNPtr _pAnte, int _newVal );
bool remove( SNPtr & _pAIL, SNPtr _pAnte, int & _retrievedVal );

#endif
