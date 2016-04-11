# Introdução #

Este projeto implementa um dicionário baseado em armazenamento com
lista com memória sequencial (vetor).
O projeto também serve como exemplo de herança, visto que são criada
2 classes: `DAL` (pai) e `DSAL` (filho).
Este exemplo é utilizado nas aulas de Estruturas de Dados Básca 1 (BTI - UFRN) sobre listas sequenciais.

A lista sequencial armazena um elemento formado por um par de
**Chave** (única) e **Informação**, que são passados como argumento-template.


# Operações #

As operações básicas suportadas são: *inserção*, *busca*, *remoção*.

A motivação para a herança é na forma de organização dos dados no vetor.
  - A lista original não mantém seus elementos ordenados. 
    A inserção é θ(1), bem como a remoção. Já a busca é O(n).
  - A lista ordenada armazena os elemento em ordem da chave. Para isso é necessário
    passar no template uma função de comparação para as chaves.
    A operação de busca é O(log n), mas a inserção é O(n), assim como a remoção.

A classe `DAL` implementa a lista sequencial mantendo os elementos sem
ordenação alguma. Desta forma, temos:
1. **inserção** é feita em θ(1) (no final);
2. **remoção** é feita em θ(1) (remove e trás último elemento para o lugar do removido); e
3. **busca** é feita em O(n).

A classe `DSAL` implementa a lista sequencial mantendo os elementos em
uma ordem especificada por um dos 3 argumento-template. Desta forma, temos:
1. **inserção** é feita em O(n) (deslocamento de memória);
2. **remoção** é feita em O(n) (deslocamento de memória); e
3. **busca** é feita em O(log n) (busca binária).


-------------------------------------------
Estudo dirigido das disciplinas de **Linguagem de Programação** e **Estrutuda de Dados Básica**, do curso de Bacharelado em Tecnologia da Informação da Universidade Federal do Rio Grande do Norte (BTI - UFRN)

Professor: Selan R. dos Santos

-- The end
