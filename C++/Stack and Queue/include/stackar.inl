#include <stdexcept> 
#include "stackar.h"

template <class Object>
void StackAr<Object>::push( const Object &x ){
	if (m_top < m_size){
		m_stack[m_top] = x;
		m_top++;
	}else throw std::length_error( "[push()]: Não é possível inserir mais elementos." );
}

template <class Object>
Object StackAr<Object>::pop( ){
	Object removed = m_stack[m_top - 1];
	m_top--;
	return removed;
}

template <class Object>
Object StackAr<Object>::top( ) const{
	return m_stack[m_top - 1];
}

template <class Object>
bool StackAr<Object>::isEmpty( ) const {
	return (m_top == 0);
}

template <class Object>
void StackAr<Object>::makeEmpty( ){
	m_top = 0;
}