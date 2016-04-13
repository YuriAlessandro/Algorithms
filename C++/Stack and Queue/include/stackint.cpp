#include "stackint.h"

template <class Object>
StackInt<Object>::StackInt( void ) : m_size ( 50 ) 
{
	m_lenth = 0;
}

template <class Object>
void 
StackInt<Object>::push( const int & x ){
	if (m_lenth < m_size)
		m_stack[m_lenth] = x;
	else std::cout << ">>> Sem espaço na pilha.\n";
}