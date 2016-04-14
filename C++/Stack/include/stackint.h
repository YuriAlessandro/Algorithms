#ifndef _STACKINT_H_
#define _STACKINT_H_

#include <iostream>

#include "AbsStack.h"

template <class Object>
class StackInt : public AbsStack<Object>{
private:
	int m_size;
	int m_top;
	int *m_stack;
	void resize();

public:
	StackInt( const int & _size = 50) : m_size ( _size ) {
		m_top = 0;
		m_stack = new int[m_size];
	}
	~StackInt( ){
		delete [] m_stack;
	}

	void push( const int &x );
	int pop( );
	int top( ) const ;

	bool isEmpty( ) const;
	void makeEmpty( );

}; 

#include "stackint.cpp"

#endif