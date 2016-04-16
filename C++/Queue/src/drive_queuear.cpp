/* Arquivo de testes para uma fila genérica de objetos. */

#include <iostream>
#include <iomanip>

#include "queuear.h"

int main(){

	std::cout << "\nRodando testes com fila...\n";
	std::cout << "\tO elemento com < ! > marca o ínico da fila.\n\n";
	
	std::cout << std::setfill('=') << std::setw(100); 

	std::cout << "\nDeclarando uma QueueAr:\n \t- NOME: fila1\n \t- TIPO DE VALORES: int\n";
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

	for (int i = 0; i < 20; ++i){
		std::cout << "Desenfilerando... saiu: " << fila1.dequeue() << std::endl;
	}
	
	std::cout << " >>>> Elemento da frente na fila1: " << fila1.getFront() << std::endl;
	std::cout << fila1 << std::endl;


	std::cout << "Esvaziando a lista...\n";
	fila1.makeEmpty();

	is_empty = fila1.isEmpty();
	(is_empty == 1) ? std::cout << ">>> Lista vazia...\n" : std::cout << ">>> Lista contém elementos...\n";
	std::cout << fila1 << std::endl;

	std::cout << std::setfill('=') << std::setw(100);

	std::cout << "\nDeclarando uma QueueAr:\n \t- NOME: fila2\n \t- TIPO DE VALORES: int\n";
	QueueAr<int> fila2;

	std::cout << "Inserindo os números 0, 10, 20, 30... 150\n";
	for (int i = 0; i <= 150; i+= 10 )
		fila2.enqueue( i );

	std::cout << fila2 << std::endl;

	std::cout << "Esvaziando a lista...\n";
	fila2.makeEmpty();

	is_empty = fila2.isEmpty();
	(is_empty == 1) ? std::cout << ">>> Lista vazia...\n" : std::cout << ">>> Lista contém elementos...\n";
	std::cout << fila2 << std::endl;
	
	std::cout << std::setfill('=') << std::setw(100); 

	std::cout << "\nDeclarando uma QueueAr:\n \t- NOME: Nomes\n \t- TIPO DE VALORES: strings\n";
	QueueAr<std::string> Nomes;

	Nomes.enqueue("Yuri");
	Nomes.enqueue("Alessandro");
	Nomes.enqueue("João");
	Nomes.enqueue("José");
	Nomes.enqueue("Silva");
	Nomes.enqueue("Martins");
	Nomes.enqueue("André");
	Nomes.enqueue("Carlos");
	Nomes.enqueue("Yuri");
	Nomes.enqueue("João");

	std::cout << Nomes << std::endl;

	std::cout << "Desenfilerando... saiu: " << Nomes.dequeue() << std::endl;
	std::cout << "Desenfilerando... saiu: " << Nomes.dequeue() << std::endl;
	std::cout << "Desenfilerando... saiu: " << Nomes.dequeue() << std::endl;

	std::cout << Nomes << std::endl;

	std::cout << "Normal exiting...\n";
	return EXIT_SUCCESS;
}