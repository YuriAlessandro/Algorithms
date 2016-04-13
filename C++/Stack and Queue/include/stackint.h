#include "AbsStack.h"

class StackInt : public AbsStack<Object>{
public:
	StackInt();

	void push( const int & x );
	int pop( );
	int top( );

	bool isEmpty( ) const;
	void makeEmpty( );
private:
	
}; 