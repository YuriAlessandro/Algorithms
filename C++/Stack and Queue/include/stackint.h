#include "AbsStack.h"

template <class Object>
class StackInt : public AbsStack<Object>{
public:
	StackInt();

	void push( const int & x );
	int pop( );
	int top( );

	bool isEmpty( ) const;
	void makeEmpty( );
private:
	int m_size;
	int m_stack[m_size];
	int m_lenght;
}; 