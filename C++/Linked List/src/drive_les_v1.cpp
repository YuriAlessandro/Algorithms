// Para compilar: g++ -Wall -pedantic drive_les_v1.cpp les_v1.cpp -o drive_les_v1

#include "les_v1.h"
#include <iostream>
using std::cout;


int main ( void ) {
    SNPtr pHead = NULL;// nullptr;

    cout << std::endl;
    bool is_empty = empty( pHead );
    (is_empty == 1) ? cout << "List -> Empty\n" : cout << "List -> Not Empty\n";

    cout << "PushFront [3]\n";
    pushFront( pHead, 3 );
    cout << "PushFront [2]\n";
    pushFront( pHead, 2 );
    cout << "PushFront [1]\n";
    pushFront( pHead, 1 );
    
    print( pHead );

    cout << "\nLenght: " << length(pHead) << std::endl;

    int val_front;
    front( pHead, val_front );
    cout << "Front: " << val_front << std::endl;

    int val_back;
    back( pHead, val_back );
    cout << "Back: " << val_back << std::endl;

	cout << "PushFront [4]\n";
	pushBack( pHead, 4 );
	cout << "PushFront [5]\n";
	pushBack( pHead, 5 );
	cout << "PushFront [6]\n";
	pushBack( pHead, 6 );

	print( pHead );

	cout << "\nClear...\n";
	clear( pHead );

	is_empty = empty( pHead );
    (is_empty == 1) ? cout << "List -> Empty\n" : cout << "List -> Not Empty\n";

    print( pHead );

    cout << "PushFront [30]\n";
    pushFront( pHead, 30 );
    cout << "PushFront [20]\n";
    pushFront( pHead, 20 );
    cout << "PushFront [10]\n";
    pushFront( pHead, 10 );

    print( pHead );
    
    int pop_b;
    popBack( pHead, pop_b );
    cout << "Pop back: " << pop_b << std::endl;

    print( pHead );

    int pop_f;
    popFront( pHead, pop_f );
    cout << "Pop front: " << pop_f << std::endl;

    print( pHead );
 
    cout << "\n\n>>> Normal exiting...\n";
    return EXIT_SUCCESS;
}
