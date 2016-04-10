/*
 * Test aaplication for the Dictionary with Array Lits or DAL.
 *
 * Try to test as many DAL's methods in varying situations
 * as possible.
 *
 * */
#include <iostream>
#include <sstream>
#include <cmath>
#include <functional>
#include <cassert>

#include "dal.h"

class MyKeyComparator{
public:
    int operator () (int lhs, int rhs) const {
        if ( lhs < rhs ) return -1;
        else if ( lhs == rhs ) return 0;
        else return 1;
    }
};

int main ( ) {
    // DAL < int , std::string , MyKeyComparator >
    DSAL < int , std::string , MyKeyComparator > myList ( 50 );
    std::cout << " >>> Inserindo {2015003129 , \" Jack \"} " << std::endl;
    myList.insert ( 2015003129 , " Jack " );
    std::cout << " >>> Inserindo {2014065190 , \" John \"} " << std::endl;
    myList.insert ( 2014065190 , " John " );

    std::cout << "Lista atualizada: " << myList << std::endl; 
    
    std::cout << " >>> Removendo {2014065190 , \" John \"} " << std::endl;
    std::string str1;
    myList.remove ( 2014065190, str1 );
    std::cout << "A informação \"" << str1 << "\" foi removida com sucesso.\n";

    std::cout << " >>> Inserindo {2001151900 , \" Yuri \"} " << std::endl;
    myList.insert ( 2001151900, "Yuri" );

    std::cout << "Lista atualizada: " << myList << std::endl; 

    std::cout << "Maior chave: " << myList.max() << std::endl;
    std::cout << "Menor chave: " << myList.min() << std::endl;

    std::cout << " >>> Inserindo {0000000000 , \" MyKEY \"} " << std::endl;
    myList.insert ( 0000000000, "MyKEY" );

    std::cout << "Lista atualizada: " << myList << std::endl;

    int sucessor, predecessor;
    myList.sucessor( 0000000000, sucessor);
    myList.predecessor( 2015003129, predecessor);
    std::cout << "Sucessor de '00000000000': " << sucessor << std::endl;
    std::cout << "Sucessor de '2015003129': " << predecessor << std::endl;

    std::cout << "Normal exiting...\n";
    return EXIT_SUCCESS;
}

