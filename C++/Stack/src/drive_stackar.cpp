/* Arquivo de testes para uma pilha de inteiros. */

#include <iostream>

#include "stackar.h"

int main(){
	
	std::cout << "\n>>> Rodando StackAr:\n";

	std::cout << "Declarando uma stack 'pilha1', com valores float...\n";
	StackAr<float> pilha1;
	
	bool cnt = pilha1.isEmpty();
	(cnt == 1) ? std::cout << "A pilha está vazia...\n" : std::cout << "A pilha tem conteúdo...\n";
	
	std::cout << "Adicionando na pilha: 2.3\n";
	pilha1.push( 2.3 );
	std::cout << "Adicionando na pilha: 5.4\n";
	pilha1.push( 5.4 );
	std::cout << "Adicionando na pilha: 7.2\n";
	pilha1.push( 7.2 );

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

	std::cout << "Adicionando na pilha: 100.2\n";
	pilha1.push( 100.2 );
	std::cout << "Adicionando na pilha: 0.34\n";
	pilha1.push( 0.34 );
	std::cout << "Adicionando na pilha: 0.003\n";
	pilha1.push( 0.003 );

	std::cout << "Elemento do topo: " << pilha1.top() << std::endl;

	std::cout << ">>> Normal exiting...\n\n";


	std::cout << "Declarando uma stack 'pilha2', com strings, porém com apenas 3 espaços...\n";
	StackAr<std::string> pilha2(3);
	
	bool cnt2 = pilha2.isEmpty();
	(cnt2 == 1) ? std::cout << "A pilha está vazia...\n" : std::cout << "A pilha tem conteúdo...\n";
	
	std::cout << "Adicionando na pilha: \"Yuri\"\n";
	pilha2.push( "Yuri" );
	std::cout << "Adicionando na pilha: \"John\"\n";
	pilha2.push( "John" );
	std::cout << "Adicionando na pilha: \"Eva\"\n";
	pilha2.push( "Eva" );

	cnt2 = pilha2.isEmpty();
	(cnt2 == 1) ? std::cout << "A pilha está vazia...\n" : std::cout << "A pilha tem conteúdo...\n";

	std::cout << "Elemento do topo: " << pilha2.top() << std::endl;

	std::cout << "Removendo elemento do topo da pilha...\n";
	
	std::cout << "Elemento removido: "<< pilha2.pop(  ) << std::endl;

	std::cout << "Elemento do topo: " << pilha2.top() << std::endl;

	std::cout << "Esvaziando a pilha...\n";
	pilha2.makeEmpty();

	cnt2 = pilha2.isEmpty();
	(cnt2 == 1) ? std::cout << "A pilha está vazia...\n" : std::cout << "A pilha tem conteúdo...\n";

	std::cout << "Adicionando na pilha: \"Carros\"\n";
	pilha2.push( "Carros" );
	std::cout << "Adicionando na pilha: \"Biclicletas\"\n";
	pilha2.push( "Biclicletas" );
	std::cout << "Adicionando na pilha: \"Motos\"\n";
	pilha2.push( "Motos" );
	std::cout << "Adicionando na pilha: \"Velocípedes\"\n";
	pilha2.push( "Velocípedes" );

	std::cout << "Elemento do topo: " << pilha2.top() << std::endl;

	std::cout << ">>> Normal exiting...\n";

	return EXIT_SUCCESS;
}