#include <iostream>
#include <cassert>
#include <sstream>

#ifndef _INTPAIR_H_
#define _INTPAIR_H_

class IntPair
{
	public:
		// Constructor
		IntPair( int _1st = -1, int _2nd = -1 )
			: m_first( _1st ), m_second ( _2nd )
		{
			std::cout << "\t>>> ...Declaring a new pair...\n";
		}

		// Construtor copia
		IntPair (const IntPair & _clone)
			: m_first ( _clone.m_first ), m_second ( _clone.m_second)
		{
			std::cout << "\t>>> ... Coping the pair...\n";
		}
		
		// Operator
		IntPair & operator=( const IntPair &_rhs ){
			if (this != & _rhs ){			//We need to avoid self-assingment
				m_first = _rhs.m_first;
				m_second = _rhs.m_second;
			}
			
			return *this;
		}

		IntPair operator+( const IntPair &_rhs ){
			IntPair result;

			result.m_first = this->m_first + _rhs.m_first;
			result.m_second = this->m_second + _rhs.m_second;
			
			return result;
		}

		bool operator==( const IntPair & _rhs){
			return (this->m_first == _rhs.m_first && this->m_second == _rhs.m_second);
		}

		bool operator!=( const & _rhs){
			return !(*this == _rhs);
		}

		// Mutator
		void set1st( int );
		void set2nd (int);
		void set( int , int );
		void flip();
		
		// Acessor
		std::string print() const;
		
		int get1st() const;
		int get2nd() const;
		void get( int & , int & ) const;



	private:
		int m_first;
		int m_second;
	
};
#endif
