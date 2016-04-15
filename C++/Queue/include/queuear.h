#ifndef _QUEUEAR_H_
#define _QUEUEAR_H_

#include <iostream>
#include <functional>

#include "AbsQueue.h"

template < class Object >
class QueueAr : public AbsQueue<Object> {
private:
	int m_size;
	int m_front;
	int m_back;
	// /int m_actualsz;
	Object * m_queue;

	void resize();
	void _double();

public:
	QueueAr( int _size = 10 ) : 
		m_size( _size ),
		m_front( -1 ),
		m_back ( -1 )
	{
		m_queue = new Object[ m_size ];	
	} 
	
	~QueueAr(){
		delete [] m_queue;
	}

	void enqueue ( const Object & x );
	Object dequeue ( );
	Object getFront ( ) const;

	bool isEmpty ( ) const;
	void makeEmpty ( );

	inline friend std::ostream &operator<< (std::ostream& _os, const QueueAr & _oList ){
        //_oList.m_actualsz = _oList.m_size - _oList.m_front;
        _os << "[ ";
        for( auto i = _oList.m_front ; i < _oList.m_back + 1 ; i++ )
            _os << _oList.m_queue[i] << " ";
        _os << "] - ACTUAL SIZE: " << (_oList.m_back - _oList.m_front) + 1 << " - TOTAL SIZE: " << _oList.m_size;
        return _os;
    }

};

#include "queuear.inl"
#endif