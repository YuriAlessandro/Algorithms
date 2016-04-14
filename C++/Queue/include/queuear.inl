#include <iostream>

#include "queuear.h"

template <class Object>
void QueueAr<Object>::resize( ){
	int* _rsz = new int[ m_size*2 ];
	auto j = m_size*2;

	for( i = m_size; i >= m_front; i--){
		m_queue[i] = _rsz[j];			
	}
	
	std::memcpy( _rsz, m_queue, ( sizeof(Object) * m_front ) - 1 );	
	delete [] m_queue;
	m_size*=2;
	m_queue = _rsz;
}

template <class Object>
void QueueAr<Object>::_double( ){
	int* _rsz = new int[ m_size*2 ];
	std::memcpy( _rsz, m_queue, sizeof(Object)*m_size );
	delete [] m_queue;
	m_size*2;
	m_queue = _rsz;
}


template <class Object>
void QueueAr<Object>::enqueue( const Object & x ){
	auto pos = (m_back + 1)%m_size;
	
	if( m_front < m_size ){
		if( m_front == -1 and m_back == -1 ){
			m_front++;
			m_back++;
			m_queue[ m_front ] = x;
		}else{
			if( pos < m_front ) this->resize();
			else if( pos == m_size ) this->_double();
			m_queue[ pos ] = x;
			m_back = pos;
		}
	}
}

template <class Object>
Object QueueAr<Object>::dequeue ( ){
	Object last = m_queue[ m_front ];
	m_front++;
	return last;
}

template <class Object>
Object QueueAr<Object>::getFront ( ) const{
	return m_queue[ m_front ];
}

template <class Object>
bool QueueAr<Object>::isEmpty ( ) const{

}

template <class Object>
void QueueAr<Object>::makeEmpty ( ){

}