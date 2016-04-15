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

	std::cout << "\n\n VAMOS ESVAZIAR...\n";
	fila1.makeEmpty();

	std::cout << "Verificando se a fila está vazia...\n";
	is_empty = fila1.isEmpty();
	(is_empty == 1) ? std::cout << ">>> Lista vazia...\n" : std::cout << ">>> Lista contém elementos...\n";

	std::cout << "Preenchendo a fila com [1-20]\n";	
	for (int i = 1; i <= 20; i++)
		fila1.enqueue( i );

	std::cout << "Lista1: " << fila1 << std::endl;

	std::cout << "Elemento na frente da fila1: " << fila1.getFront() << std::endl;

	std::cout << "\n\n VAMOS DESENFELIRAR...\n";
	std::cout << "Desenfilerando... saiu: " << fila1.dequeue() << std::endl;
	std::cout << "Desenfilerando... saiu: " << fila1.dequeue() << std::endl;

	std::cout << "\n\n VAMOS ENFELIRAR...\n";
	std::cout << "Enfilerando 18: " << std::endl; 
	fila1.enqueue( 18 );
	std::cout << "Enfilerando 1321312: " << std::endl; 
	fila1.enqueue( 1321312 );

	std::cout << "\n\n VAMOS DESENFELIRAR...\n";
	std::cout << "Desenfilerando... saiu: " << fila1.dequeue() << std::endl;
	std::cout << "Desenfilerando... saiu: " << fila1.dequeue() << std::endl;
	std::cout << "Desenfilerando... saiu: " << fila1.dequeue() << std::endl;
	std::cout << "Desenfilerando... saiu: " << fila1.dequeue() << std::endl;

	std::cout << "\n\n VAMOS ENFELIRAR...\n";
	for (int i = 5; i < 1500; i*=5){
		fila1.enqueue(i);
	}

	std::cout << "Verificando se a fila está vazia...\n";
	is_empty = fila1.isEmpty();
	(is_empty == 1) ? std::cout << ">>> Lista vazia...\n" : std::cout << ">>> Lista contém elementos...\n";

	std::cout << "Lista1: " << fila1 << std::endl;

	std::cout << "Elemento na frente da fila1: " << fila1.getFront() << std::endl;

	std::cout << "Normal exiting...\n";
	return EXIT_SUCCESS;
}