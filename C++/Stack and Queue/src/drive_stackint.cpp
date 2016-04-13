#include <iostream>

#include "stackint.h"

int main(){
	
	std::cout << ">>> Rodando StackInt:\n";

	std::cout << "Declarando uma stack 'pilha1' com tamanho 50...\n";
	StackInt<int> pilha1( 50 );
	
	bool cnt = pilha1.isEmpty();
	(cnt == 1) ? std::cout << "A pilha está vazia...\n" : std::cout << "A pilha tem conteúdo...\n";
	
	std::cout << "Adicionando na pilha: 2\n";
	std::cout << "Adicionando na pilha: 5\n";
	std::cout << "Adicionando na pilha: 7\n";

	pilha1.push( 2 );
	pilha1.push( 5 );
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

	 std::cout << ">>> Normal exiting...\n";

	return EXIT_SUCCESS;
}