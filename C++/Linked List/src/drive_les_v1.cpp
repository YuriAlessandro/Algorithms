// Para compilar: g++ -Wall -pedantic drive_les_v1.cpp les_v1.cpp -o drive_les_v1

#include "les_v1.h"
#include <iostream>
using std::cout;


int main ( void ) {
    SNPtr pHead = NULL;// nullptr;

    cout << std::endl;
    bool is_empty = empty( pHead );
    (is_empty == 1) ? cout << "Vazio\n" : cout << "Tem conteúdo\n";
    

    pushBack( pHead, 100 );

	print( pHead );

    pushFront( pHead, 3 );
    pushFront( pHead, 2 );
    pushFront( pHead, 1 );
    
    print( pHead );

    cout << "\nLenght: " << length(pHead) << std::endl;

    int val_front;
    front( pHead, val_front );
    cout << "Valor da frente: " << val_front << std::endl;

    int val_back;
    back( pHead, val_back );
    cout << "Valor de trás: " << val_back << std::endl;

	pushBack( pHead, 4 );
	pushBack( pHead, 5 );
	pushBack( pHead, 6 );

	print( pHead );

	cout << "\nLimpando...\n";
	clear( pHead );

	is_empty = empty( pHead );
    (is_empty == 1) ? cout << "Vazio\n" : cout << "Tem conteúdo\n";

    print( pHead );

    pushFront( pHead, 3 );
    pushFront( pHead, 2 );
    pushFront( pHead, 1 );

    print( pHead );
    int pop;
    popBack( pHead, pop );
    cout << "Pop back: " << pop << std::endl;

    print( pHead );
 
    cout << "\n\n>>> Normal exiting...\n";
    return EXIT_SUCCESS;
}
