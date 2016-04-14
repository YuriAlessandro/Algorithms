/* Arquivo de testes para uma pilha de inteiros. */

#include <iostream>

#include "stackint.h"

int main(){
	
	std::cout << "\n>>> Rodando StackInt:\n";

	std::cout << "Declarando uma stack 'pilha1'\n";
	StackInt<int> pilha1( 2 );
	
	bool cnt = pilha1.isEmpty();
	(cnt == 1) ? std::cout << "A pilha está vazia...\n" : std::cout << "A pilha tem conteúdo...\n";
	
	std::cout << "Adicionando na pilha: 2\n";
	pilha1.push( 2 );
	std::cout << "Adicionando na pilha: 5\n";
	pilha1.push( 5 );
	std::cout << "Adicionando na pilha: 7\n";
	pilha1.push( 7 );

	cnt = pilha1.isEmpty();
	(cnt == 1) ? std::cout << "A pilha está vazia...\n" : std::cout << "A pilha tem conteúdo...\n";

	std::cout << "Elemento do topo: " << pilha1.top() << std::endl;

	std::cout << "Removendo elemento do topo da pilha...\n";
	
	std::cout << "Elemento removido: "<< pilha1.pop(  ) << std::endl;

	std::cout << "Elemento do topo: " << pilha1.top() << std::endl;

	std::cout << "Esvaziando a pilha...\n";
	pilha1.makeEmpty();

	cnt = pilha1.isEmpty();
	(cnt == 1) ? std::cout << "A pilha está vazia...\n" : std::cout << "A pilha tem conteúdo...\n";

	std::cout << "Adicionando na pilha: 100\n";
	pilha1.push( 100 );
	std::cout << "Adicionando na pilha: 0\n";
	pilha1.push( 0 );
	std::cout << "Adicionando na pilha: 23\n";
	pilha1.push( 23 );

	std::cout << "Elemento do topo: " << pilha1.top() << std::endl;

	std::cout << ">>> Normal exiting...\n";

	return EXIT_SUCCESS;
}