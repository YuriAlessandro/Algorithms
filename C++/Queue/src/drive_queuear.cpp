/* Arquivo de testes para uma fila genérica de objetos. */

#include <iostream>

#include "queuear.h"

int main(){

	std::cout << "Declarando uma QueueAr:\n \t- NOME: fila1\n \t- TIPO DE VALORES: int\n";
	QueueAr<int> fila1;

	std::cout << "Verificando se a fila está vazia...\n";
	bool is_empty = fila1.isEmpty();
	(is_empty == 1) ? std::cout << ">>> Lista vazia...\n" : std::cout << ">>> Lista contém elementos...\n";

	std::cout << "Adicionando 3 na fila1...\n";
	fila1.enqueue( 3 );

	std::cout << "Adicionando 4 na fila1...\n";
	fila1.enqueue( 4 );

	std::cout << "Adicionando 5 na fila1...\n";
	fila1.enqueue( 5 );

	std::cout << "Verificando se a fila está vazia...\n";
	is_empty = fila1.isEmpty();
	(is_empty == 1) ? std::cout << ">>> Lista vazia...\n" : std::cout << ">>> Lista contém elementos...\n";

	std::cout << "Elemento na frente da fila1: " << fila1.getFront() << std::endl;

	std::cout << "Adicionando 20 na fila1...\n";
	fila1.enqueue( 20 );

	std::cout << "Adicionando 2 na fila1...\n";
	fila1.enqueue( 2 );

	std::cout << "Adicionando 10000 na fila1...\n";
	fila1.enqueue( 10000 );

	std::cout << "Elemento na frente da fila1: " << fila1.getFront() << std::endl;

	std::cout << "\n\n VAMOS DESENFELIRAR...\n";
	std::cout << "Desenfilerando... saiu: " << fila1.dequeue() << std::endl;
	std::cout << "Desenfilerando... saiu: " << fila1.dequeue() << std::endl;
	std::cout << "Desenfilerando... saiu: " << fila1.dequeue() << std::endl;
	std::cout << "Desenfilerando... saiu: " << fila1.dequeue() << std::endl;
	std::cout << "Desenfilerando... saiu: " << fila1.dequeue() << std::endl;

	std::cout << "Elemento na frente da fila1: " << fila1.getFront() << std::endl;

	std::cout << "\n\n VAMOS ESVAZIAR...\n";
	fila1.makeEmpty();

	std::cout << "Verificando se a fila está vazia...\n";
	is_empty = fila1.isEmpty();
	(is_empty == 1) ? std::cout << ">>> Lista vazia...\n" : std::cout << ">>> Lista contém elementos...\n";

	std::cout << "Preenchendo a fila com [0-1]\n";
	for (int i = 0; i < 100; ++i)
		fila1.enqueue( i );

	std::cout << "Elemento na frente da fila1: " << fila1.getFront() << std::endl;

	std::cout << "Normal exiting...\n";
	return EXIT_SUCCESS;
}