#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

class Hero{

public:
	enum attribute_t {ATTACK, DEFENSE, HEALING};
	Hero( std::string _n = "") : m_name(_n){
		m_points.resize( 3 );
		std::fill( m_points.begin(), m_points.end(), 0);
	}
	
	void setAttribute( attribute_t _at, int _a)	//Set hero's attributes
	{
		m_points[ _at ] = _a;
	}
	
	int getAttribute( attribute_t _at) const{	//Get hero's attributes
		return m_points [ _at ];
	}
	
	std::string getName( ) const{ 				//Get hero's name
		return m_name;
	}

private:
	std::string m_name;
	std::vector<int> m_points;					// Store hero's attributes
};

//Sort the heros by name;
bool compareByName (const Hero&_h1, const Hero&_h2){
	
	return ( _h1.getName() < 
			_h2.getName());

}

//Functor:
struct compareAttrib{
	
	compareAttrib( Hero::attribute_t _at ) : m_at( _at ){}

	bool operator()(const Hero& _h1, const Hero& _h2){
		return ( _h1.getAttribute( m_at ) < 
				_h2.getAttribute( m_at ));
	}

	Hero::attribute_t m_at; 					//Guarda um atributo que eu desejo comparar.
};

//Print the hero's attributes
std::ostream & operator<< ( std::ostream & _os, const Hero & _h){
	_os << "{<" << _h.getName()
				<< ">, A=" << _h.getAttribute(Hero::ATTACK)
				<< ", D=" << _h.getAttribute(Hero::DEFENSE)
				<< ", H=" << _h.getAttribute(Hero::HEALING)
				<< "}";
	return _os;
}


int main(int argc, char const *argv[])
{
	std::vector< Hero > heros = { Hero("Dragao"), 
										Hero("Humano"), 
										Hero("Elfo"), 
										Hero("Orc"),
										Hero("Ogro")};
	
	enum heros_t {DRAGAO, HUMANO, ELFO, ORC, OGRO};
	heros[DRAGAO].setAttribute(Hero::ATTACK,  100000 );
	heros[DRAGAO].setAttribute(Hero::DEFENSE, 100000 );
	heros[DRAGAO].setAttribute(Hero::HEALING, 672 );
	
	heros[HUMANO].setAttribute(Hero::ATTACK,  100 );
	heros[HUMANO].setAttribute(Hero::DEFENSE, 10 );
	heros[HUMANO].setAttribute(Hero::HEALING, 100 );
	
	heros[ORC].setAttribute( Hero::ATTACK, 200 );
	heros[ORC].setAttribute(Hero::DEFENSE, 200 );
	heros[ORC].setAttribute(Hero::HEALING, 200 );
	
	heros[ELFO].setAttribute ( Hero::ATTACK, 260 );
	heros[ELFO].setAttribute (Hero::DEFENSE, 800 );
	heros[ELFO].setAttribute (Hero::HEALING, 300 );

	heros[OGRO].setAttribute ( Hero::ATTACK, 680 );
	heros[OGRO].setAttribute (Hero::DEFENSE, 800 );
	heros[OGRO].setAttribute (Hero::HEALING, 1000 );
	
	std::cout << "\n>>> Hero list BEFORE sorting: \n";
	std::copy( heros.begin(), heros.end(),
				std::ostream_iterator< Hero >(std::cout, " \n") );
	
	compareAttrib ca( Hero::ATTACK);
	compareAttrib cd( Hero::DEFENSE);
	compareAttrib ch( Hero::HEALING);

	//std::sort(heros.begin(), heros.end(), compareByName);
	std::sort(heros.begin(), heros.end(), ca);
	
	std::cout << std::endl;std::cout << "\n>>> Sorted by ATTACK: \n";
	std::copy( heros.begin(), heros.end(),
				std::ostream_iterator< Hero >(std::cout, " \n") );
	std::cout << std::endl;

	std::sort(heros.begin(), heros.end(), cd);
	
	std::cout << std::endl;std::cout << "\n>>> Sorted by DEFENSE: \n";
	std::copy( heros.begin(), heros.end(),
				std::ostream_iterator< Hero >(std::cout, " \n") );
	std::cout << std::endl;

	std::sort(heros.begin(), heros.end(), ch);
	
	std::cout << std::endl;std::cout << "\n>>> Sorted by HEALING: \n";
	std::copy( heros.begin(), heros.end(),
				std::ostream_iterator< Hero >(std::cout, " \n") );
	std::cout << std::endl;
	
	return EXIT_SUCCESS;
}