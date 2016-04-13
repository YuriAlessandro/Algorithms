#include <iostream>
#define HOW_MANY_TIMES 5

using namespace std;

int main(){
	auto negatives( 0u ); // MESMO QUE: int negatives = 0; u siginigica unsigned;
	auto number ( 0 );

	// Pedindo os 5 numeros de entrada
	for(auto i(0) ; i < HOW_MANY_TIMES ; i++){
		cin >> number;
		if(number < 0) negatives++;
	}

	cout << "\n" << negatives << " numeros negativos de um total de " << HOW_MANY_TIMES;
	cout << "\n>>> Normal exiting... \n \n";
	return 0;
}
