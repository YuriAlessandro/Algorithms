// This is a stub code (or skeleton code) just to allow the first compilation.

#include <iostream>
#include "les_v1.h"

using namespace std;


//! Prints the list.
/*! This a debugging function that prints the list content.
 *  @param _pAIL Pointer to the head of the list. It NULL, list is empty.
 */
void print( SNPtr _pAIL ){
    cout << "{ ";
    while( _pAIL != NULL ){
        cout << _pAIL->miData << " ";
        _pAIL = _pAIL->mpNext;
    }
    cout << "}\n";
}

//! Length of the list.
/*! Calculates and return the length of the list. Length is zero, if list is empty.
 *  @param _pAIL Pointer to the head of the list. It NULL, list is empty.
 *  @return The length.
 */

int length( SNPtr _pAIL ){
    int l = 0;
    while (_pAIL != NULL){
        l++;
        _pAIL = _pAIL->mpNext;
    }
    return l;
}


bool empty( SNPtr _pAIL ){
    return ( _pAIL == NULL );
}


void clear( SNPtr & _pAIL ){
    if( _pAIL != NULL){
        SNPtr work;
        while ( _pAIL != NULL){
            work = _pAIL->mpNext;
            delete _pAIL;
            _pAIL = work; 
        }
    }
}


bool front( SNPtr _pAIL, int & _retrievedVal ){
    _retrievedVal = _pAIL->miData;
    return true;
}


bool back( SNPtr _pAIL, int & _retrievedVal ){
    if (_pAIL == NULL )
        return false;
    
    while( _pAIL->mpNext != NULL ){
        _pAIL = _pAIL->mpNext;
    }
    
    _retrievedVal = _pAIL->miData;

    return true;
}


bool pushFront( SNPtr & _pAIL, int _newVal ){
    SNPtr tmp = NULL;
    try{
        tmp = new SLLNode;
    }catch (const std::bad_alloc & e){
        return false;
    }
    tmp->miData = _newVal;
    tmp->mpNext = _pAIL;
    _pAIL = tmp;

    return true;
}


bool pushBack( SNPtr & _pAIL, int _newVal ){
    if ( _pAIL == NULL ) pushFront( _pAIL, _newVal );
    else{
        SNPtr tmp = NULL;
        try{
            tmp = new SLLNode;
        }catch(const std::bad_alloc & e){
            return false;
        }
        tmp->miData = _newVal;
        tmp->mpNext = NULL;
        
        SNPtr work = _pAIL;
    
        while( work->mpNext != NULL )
            work = work->mpNext;
        work->mpNext = tmp;
    }
    return true;
}


bool popFront( SNPtr & _pAIL, int & _retrievedVal ){
    if( _pAIL != NULL ){

    }
    
    return true;
}


bool popBack( SNPtr & _pAIL, int& _retrievedVal ){
    if( _pAIL != NULL ){
        SNPtr work = _pAIL;
        SNPtr tail = _pAIL->mpNext;
        while( tail->mpNext != NULL ){
            work = work->mpNext;
        	tail = tail->mpNext;
        }
        _retrievedVal = tail->miData;
        delete tail;
        work->mpNext = NULL;
    }
    return true;
}


SNPtr find( SNPtr _pAIL, int _targetVal ){
    return NULL;
}


bool insert( SNPtr & _pAIL, SNPtr _pAnte, int _newVal ){
    return true;
}


bool remove( SNPtr & _pAIL, SNPtr _pAnte, int & _retrievedVal ){
    return true;
}


//**** ===================[ End of les_v1.cpp ]=================== ****// 
