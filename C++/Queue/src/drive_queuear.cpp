/* Arquivo de testes para uma fila genérica de objetos. */

#include <iostream>

#include "queuear.h"

int main(){

	std::cout << "Declarando uma QueueAr:\n \t- NOME: fila1\n \t- TIPO DE VALORES: int\n";
	QueueAr<int> fila1;

	bool is_empty = fila1.isEmpty();
	(is_empty == 1) ? std::cout << ">>> Lista vazia...\n" : std::cout << ">>> Lista contém elementos...\n";

	std::cout << "Inserindo os números de 1 à 10\n";	
	for (int i = 1; i <= 10; i++){
		fila1.enqueue( i );
	}

	is_empty = fila1.isEmpty();
	(is_empty == 1) ? std::cout << ">>> Lista vazia...\n" : std::cout << ">>> Lista contém elementos...\n";

	std::cout << " >>>> Elemento da frente na fila1: " << fila1.getFront() << std::endl;
	std::cout << fila1 << std::endl;

	std::cout << "Desenfilerando... saiu: " << fila1.dequeue() << std::endl;
	std::cout << " >>>> Elemento da frente na fila1: " << fila1.getFront() << std::endl;
	std::cout << fila1 << std::endl;
	
	std::cout << "Inserido: 11" << std::endl;
	fila1.enqueue( 11 );
	
	std::cout << " >>>> Elemento da frente na fila1: " << fila1.getFront() << std::endl;
	std::cout << fila1 << std::endl;
	
	std::cout << "Desenfilerando... saiu: " << fila1.dequeue() << std::endl;
	std::cout << " >>>> Elemento da frente na fila1: " << fila1.getFront() << std::endl;
	std::cout << fila1 << std::endl;
	
	std::cout << "Inserido: 12" << std::endl;
	fila1.enqueue( 12 );

	std::cout << " >>>> Elemento da frente na fila1: " << fila1.getFront() << std::endl;
	std::cout << fila1 << std::endl;
	
	std::cout << "Inserido: 13" << std::endl;
	fila1.enqueue( 13 );
	
	std::cout << " >>>> Elemento da frente na fila1: " << fila1.getFront() << std::endl;
	std::cout << fila1 << std::endl;

	std::cout << "Inserido os números de 14 à 50" << std::endl;
	for( auto i = 14; i <= 50; i++)
		fila1.enqueue( i );
	
	std::cout << " >>>> Elemento da frente na fila1: " << fila1.getFront() << std::endl;
	std::cout << fila1 << std::endl;

	std::cout << "Esvaziando a lista:\n";
	fila1.makeEmpty();

	is_empty = fila1.isEmpty();
	(is_empty == 1) ? std::cout << ">>> Lista vazia...\n" : std::cout << ">>> Lista contém elementos...\n";

	std::cout << "Declarando uma QueueAr:\n \t- NOME: fila2\n \t- TIPO DE VALORES: int\n";
	QueueAr<int> lista2;

	std::cout << "Inserindo os números 0, 10, 20, 30... 150\n";
	for (int i = 0; i < 100; i+= 10 )
		lista2.enqueue( i );

	std::cout << lista2 << std::endl;
	

	std::cout << "Normal exiting...\n";
	return EXIT_SUCCESS;
}