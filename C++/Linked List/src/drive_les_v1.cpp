// Para compilar: g++ -Wall -pedantic drive_les_v1.cpp les_v1.cpp -o drive_les_v1

#include "les_v1.h"
#include <iostream>
using std::cout;


int main ( void ) {
    SNPtr pHead = NULL;// nullptr;

    // TEST 'empty':
    cout << std::endl;
    bool is_empty = empty( pHead );
    (is_empty == 1) ? cout << "List -> Empty\n" : cout << "List -> Not Empty\n";
    //////////////////////////

    // TEST 'pushFront':
    cout << "\nPushFront [3]\n";
    pushFront( pHead, 3 );
    cout << "PushFront [2]\n";
    pushFront( pHead, 2 );
    cout << "PushFront [1]\n";
    pushFront( pHead, 1 );
    
    print( pHead );
    //////////////////////////

    // TEST 'lenght':
    cout << "\nLenght: " << length(pHead) << std::endl;
    //////////////////////////

    // TEST 'front' and 'back':
    int val_front;
    front( pHead, val_front );
    cout << "Front: " << val_front << std::endl;
    //////////////////////////
    int val_back;
    back( pHead, val_back );
    cout << "Back: " << val_back << std::endl;
    //////////////////////////

    //////////////////////////
	cout << "PushFront [4]\n";
	pushBack( pHead, 4 );
	cout << "PushFront [5]\n";
	pushBack( pHead, 5 );
	cout << "PushFront [6]\n";
	pushBack( pHead, 6 );
	
	print( pHead );
    //////////////////////////

    // TEST 'clear':
	cout << "\nClear...\n";
	clear( pHead );

	is_empty = empty( pHead );
    (is_empty == 1) ? cout << "List -> Empty\n" : cout << "List -> Not Empty\n";

    print( pHead );
    //////////////////////////

    //////////////////////////
    cout << "PushFront [30]\n";
    pushFront( pHead, 30 );
    cout << "PushFront [20]\n";
    pushFront( pHead, 20 );
    cout << "PushFront [10]\n";
    pushFront( pHead, 10 );
    
    print( pHead );
    //////////////////////////
    
    // TEST 'popBack' and 'popFront:
    int pop_b;
    popBack( pHead, pop_b );
    cout << "\nPop back: " << pop_b << std::endl;

    print( pHead );
    //////////////////////////
    int pop_f;
    popFront( pHead, pop_f );
    cout << "Pop front: " << pop_f << std::endl;

    print( pHead );
    //////////////////////////

    //////////////////////////
    cout << "PushBack [40]\n";
    pushBack( pHead, 40 );
    cout << "PushBack [50]\n";
    pushBack( pHead, 50 );
    cout << "PushBack [60]\n";
    pushBack( pHead, 60 );

    print( pHead );
    //////////////////////////

    // TEST 'find':
    cout << "Try to found the node before [50]\n";
    SNPtr found = find( pHead, 50 );
    print( found );
    //////////////////////////

    // TEST 'insert':
    cout << "Insert [0] in first position\n";
    insert(pHead, pHead, 0);

    print(pHead);

    cout << "Insert [800] in third position\n";
    insert(pHead, (pHead->mpNext)->mpNext, 800);

    print(pHead);

    //////////////////////////

    // TEST 'remove':
    cout << "Removing the node in fourth position...\n";
    int _removed;
    remove(pHead, ((pHead->mpNext)->mpNext), _removed);
    
    cout << "info removed: " << _removed << std::endl;
    
    print(pHead);
    //////////////////////////
 
    cout << "\n\n>>> Normal exiting...\n";
    return EXIT_SUCCESS;
}
