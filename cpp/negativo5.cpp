#include <iostream>
#define HOW_MANY_TIMES 5

using namespace std;

//Lê 5 valores inteiros, um de cada vez, conta quantos destes valores são negativos e imprime esta informação.

int main(){
	auto negatives( 0u ); // MESMO QUE: int negatives = 0; u siginigica unsigned;
	auto number ( 0 );

	// Pedindo os 5 numeros de entrada
	for(auto i(0) ; i < HOW_MANY_TIMES ; i++){
		cin >> number;
		if(number < 0) negatives++;
	}

	cout << "Total de " << negatives << " numeros negativos";
	cout << "\n>>> Normal exiting... \n \n";
	return 0;
}
