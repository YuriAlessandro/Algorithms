#include <iostream>
#include <cstring>

#include "queuear.h"

template <class Object>
void QueueAr<Object>::resize( ){
	std::cout << "Drobrando/reorganizando fila...\n";
	
	Object* _rsz = new Object[ m_size*2 ];

	auto j = m_size * 2;
	for( int i = m_size; i >= m_front; i--){
		m_queue[i] = _rsz[j];
		j--;			
	}
	
	std::memcpy( _rsz, m_queue, ( sizeof(Object) * m_front ) - 1 );	
	delete [] m_queue;
	m_size*=2;
	m_queue = _rsz;
}

template <class Object>
void QueueAr<Object>::_double( ){
	std::cout << "Dobrando tamanho da fila...\n";

	Object* _rsz = new Object[ m_size*2 ];
	std::memcpy( _rsz, m_queue, sizeof(Object)*m_size );
	delete [] m_queue;
	m_size*=2;
	m_queue = _rsz;
}


template <class Object>
void QueueAr<Object>::enqueue( const Object & x ){
	
	auto pos = (m_back + 1)%m_size;
	
	//if( m_front < m_size ){
		if( m_front == -1 and m_back == -1 ){
			m_front++;
			m_back++;
			m_queue[ m_front ] = x;
		}else{
			if( m_back < m_front ) this->resize();
			else if( m_back == m_size ) this->_double();
			m_queue[ pos ] = x;
			m_back = pos;
		}
	//}
}

template <class Object>
Object QueueAr<Object>::dequeue ( ){
	Object last = m_queue[ m_front ];
	m_front = (m_front+1)%m_size;
	return last;
}

template <class Object>
Object QueueAr<Object>::getFront ( ) const{
	return m_queue[ m_front ];
}

template <class Object>
bool QueueAr<Object>::isEmpty ( ) const{
	return ( m_front <= 0 and m_back <= 0 );
}

template <class Object>
void QueueAr<Object>::makeEmpty ( ){
	m_front = -1;
	m_back = -1;
}