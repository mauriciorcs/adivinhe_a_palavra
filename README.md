# adivinhe a palavra.


#include <iostream> : importa a biblioteca iostrem 
assim, você pode usar recursos como std::cout para imprimir dados no console e 
std::cin para ler dados do usuário a partir do console.

#include<string> : importa a biblioteca padrão string.
permitindo criar objetos da classe string e usar seus métodos para manipular strings. 

#include <cstdlib> : importa a biblioteca cstdlib, 
que fornece várias funções e constantes úteis para realizar operações como por exemplo rand().

#include <ctime> : importa a biblioteca ctime,
informa ao compilador que o programa precisa incluir a 
biblioteca padrão de C++ que contém funções relacionadas ao tempo e data.

enum campos {PALAVRA, DICA, NUM_CAMPOS}; :o enum permite criar um tipo de dados personalizado, 
pode ser usado para definir uma lista de valores inteiros, pode-se também
criar variáveis do tipo do enum e atribuir a elas um dos valores constantes nomeados do enum.

const string PALAVRAS[NUM_PALAVRAS][NUM_CAMPOS] :
cria uma matriz bidimensional de strings constantes.

srand(static_cast<unsigned int>(time(0))); :
inicializa a semente do gerador de números.
O comando `time(0)` retorna o número de segundos desde 1º de janeiro de 1970, que é um valor que muda a cada segundo. 
Ao converter esse valor para um `unsigned int` com o `static_cast`, obtemos um valor inteiro
que pode ser usado para inicializar a semente do gerador de números pseudoaleatórios.

int escolha = (rand() % NUM_PALAVRAS);
a função rand() gera um número inteiro pseudoaleatório entre 0 e RAND_MAX, ou seja,
no código é gerado um número inteiro de 0 á NUM_PALAVRAS.
O operador % é usado para obter o resto da divisão de rand() por NUM_PALAVRAS.
