#ifndef _STACKAR_H_
#define _STACKAR_H_

#include <iostream>
#include <AbsStack.h>

template <class Object>
class StackAr : public AbsStack<Object>{
private:
	int m_size;
	int m_top;
	Object *m_stack;
	void resize();

public:
	StackAr( const int & _size = 10) : m_size ( _size ) {
		m_top = 0;
		m_stack = new Object[m_size];
	}

	void push( const Object &x );
	Object pop( );
	Object top( ) const ;

	bool isEmpty( ) const;
	void makeEmpty( );

	inline friend std::ostream &operator<< (std::ostream& _os, const StackAr& _oList )
        {
            _os << "STACK: [ ";
            for( int i(0) ; i < _oList.m_top ; i++ ){
                if (i == _oList.m_top - 1) _os << "< " << _oList.m_stack[i] << " >  ";
                else _os << _oList.m_stack[i] << " ";
            }
            _os << "]";
            return _os;
        }

}; 

#include "stackar.inl"

#endif