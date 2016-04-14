#ifndef _QUEUEAR_H_
#define _QUEUEAR_H_

template < class Object >
class QueueAr : public AbsQueue<Object>{
public:
	QueueAr( int _size = 50 ) : 
		m_size( _size ),
		m_front( -1 ),
		m_back ( -1 )
	{
		m_queue = new Object[ _size ];	
	} 
	
	~QueueAr(){
		delete [] m_queue;
	}

	void enqueue ( const Object & x );
	Object dequeue ( );
	Object getFront ( ) const;

	bool isEmpty ( ) const;
	void makeEmpty ( );

private:
	int m_size;
	int m_front;
	int m_back;
	Object * m_queue;
};

#include "queuear.inl"

#endif