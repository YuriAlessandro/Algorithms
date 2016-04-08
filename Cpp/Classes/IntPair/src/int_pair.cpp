#include "int_pair.h"

using namespace std;	

	void 
	IntPair::set1st( int _new1st ){
		m_first = _new1st;
		//this->m_first = _new1st;
	}
	
	void 
	IntPair::set2nd (int _new2nd){
		m_second = _new2nd;
	}

	void 
	IntPair::set( int _1st, int _2nd){
		m_first = _1st;
		m_second = _2nd;
	}
	
	int 
	IntPair::get1st() const{ return m_first; }
	
	int 
	IntPair::get2nd() const{ return m_second; }
	
	void 
	IntPair::get( int & _1st, int & _2nd) const{
		_1st = m_first;
		_2nd = m_second;
	}

	string 
	IntPair::print() const{
		stringstream ss;

		ss << "[ " << m_first << ", " << m_second << " ]\n";
		return ss.str();
	}
	void
	IntPair::flip(){
		std::cout << "\n\t>>> ...Flipping the pair...\n";
		swap( m_first, m_second);
	}

