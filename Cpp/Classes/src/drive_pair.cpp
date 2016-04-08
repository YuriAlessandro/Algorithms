#include <iostream>
#include <cassert>
#include <sstream>
#include "int_pair.h"

using namespace std;

void flipAndPrint( IntPair _p ){
	_p.flip();
	cout << "The pair fliped is " << _p.print() << endl;
}

int main(){

	IntPair p1;
	IntPair p2(2,3);
	cout << ">>> The pair p1 is " << p1.print() << endl;
	cout << ">>> The pair p2 is " << p2.print() << endl;

	
	p1.set1st(-3); 	// Sets the 1st element of the pair.
	p1.set2nd(0); 	// Sets the 2nd element of the pair.

	cout << ">>> The new pair p1 is " << p1.print() << endl;	

	flipAndPrint ( p1 );

	// Teste unitário #1: funcoes get
	auto x = p1.get1st();	// Recovery the 1st element of the pair.
	assert (x == -3);

	auto y = p1.get2nd();	// Recovery the 2nd element of the pair.
	assert (y == 0);

	p1.set(-4, 4); 			// Sets both elements of the pair.
	cout << ">>> Now, the pair p1 is " << p1.print() << endl;	

	int z1, z2;
	
	cout << "Type the new pair:";
	cin >> z1 >> z2;

	IntPair p4;
	p4.set(z1,z2);			// Recovery both values of the pair.
//	assert (z1 == -4);
//	assert (z2 == 4);

	cout << ">>> The set pair p4 is " << p4.print() << endl;	

	flipAndPrint ( p4 );
	
	p2.set(5,8);
	IntPair p3(100, 500);
	cout << ">>> The pair p2, before assing operation, is " << p2.print() << endl;
	cout << ">>> The pair p3, before assing operation, is " << p3.print() << endl;
	p3 = p2;
	cout << ">>> The pair p3, after assing operation, is " << p3.print() << endl;

	IntPair p6;
	IntPair p7(1, 2);
	IntPair p8(2, 1);
	p6 = p7 + p8;
	cout << ">>> The pair p7, before summ, is " << p7.print() << endl;
	cout << ">>> The pair p8, before summ, is " << p8.print() << endl;
	cout << ">>> The pair p6 (p7 + p8) is " << p6.print() << endl;

	if (p1 == p2) {
		cout << "\nThe pair p1 and p2 are EQUAL\n";
	}
	else {
		cout << "\nThe pair p1 and p2 are NOT EQUAL\n";
	}

	cout << "\n >>> NORMAL EXITING...\n";
	return EXIT_SUCCESS;
}