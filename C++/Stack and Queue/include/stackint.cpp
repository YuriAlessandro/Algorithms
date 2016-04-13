#include "stackint.h"

template <class Object>
void StackInt<Object>::push( const Object &x ){
	if (m_top < m_size){
		m_stack[m_top] = x;
		m_top++;
	}
	else std::cout << ">>> Sem espaço na pilha.\n";		//Dar um resize depois
}

template <class Object>
Object StackInt<Object>::pop( ){
	Object removed = m_stack[m_top - 1];
	m_top--;
	return removed;
}

template <class Object>
Object StackInt<Object>::top( ) const{
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