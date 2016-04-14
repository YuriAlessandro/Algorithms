#include <iostream>
#include <cstring>

#include "stackint.h"

template <class Object>
void StackInt<Object>::resize(  ){
	int* _rsz = new int[ m_size + 1 ];
	std::memcpy( _rsz, m_stack, m_size );
	delete [] m_stack;
	m_size++;
	m_stack = _rsz;
}

template <class Object>
void StackInt<Object>::push( const int &x ){
	if (m_top > m_size){
		this->resize();
	}
	m_stack[m_top] = x;
	m_top++;
}


template <class Object>
int StackInt<Object>::pop( ){
	Object removed = m_stack[m_top - 1];
	m_top--;
	return removed;
}

template <class Object>
int StackInt<Object>::top( ) const{
	return m_stack[m_top - 1];
}

template <class Object>
bool StackInt<Object>::isEmpty( ) const {
	return (m_top == 0);
}

template <class Object>
void StackInt<Object>::makeEmpty( ){
	m_top = 0;
}