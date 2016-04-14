#ifndef _STACKAR_H_
#define _STACKAR_H_

#include <iostream>

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

}; 

#include "stackar.inl"

#endif