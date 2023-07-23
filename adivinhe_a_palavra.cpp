//confusão de palavras
//o clássico jogo de palavras cruzadas onde o jogador pode pedir uma dica

#include <iostream>

#include<string>

#include <cstdlib>

#include <ctime>

using namespace std;

int main()
{
    enum campos {PALAVRA, DICA, NUM_CAMPOS};
    const int NUM_PALAVRAS = 10;
    const string PALAVRAS[NUM_PALAVRAS][NUM_CAMPOS] = 
    {
        {"parede", "você sente que está batendo a cabeça em alguma coisa?"},
        {"vidros", "Estes podem ajudá-lo a ver a resposta"},
        {"trabalho", "indo devagar, não é?"},
        {"persistente", "Continue assim."},
        {"confusao", "É disso que se trata o jogo. "},
        {"relogio","Da muitas voltas e não sai do lugar."},
        {"passado","Nunca volta, embora nunca tenha ido."},
        {"piolho","Anda com os pes na cabeça."},
        {"letra'a'","Tem no meio do coração."},
        {"papa-leguas","Se alimenta de léguas."}
    };

    srand(static_cast<unsigned int>(time(0)));
    int escolha = (rand() % NUM_PALAVRAS);
    string aPalavra = PALAVRAS[escolha][PALAVRA]; // palavra para adivinhar
    string aDica = PALAVRAS[escolha][DICA]; // dica para palavra

    string confusao = aPalavra; // versão confusa da palavra
    int tamanho = confusao.size();
    for (int i = 0; i < tamanho; ++i){

        int indice1 = (rand() % tamanho);
        int indice2 = (rand() % tamanho);
        char aux = confusao[indice1];
        confusao[indice1] = confusao[indice2];
        confusao[indice2] = aux;

    }
   cout << "\t\t\t Bem-vindo ao confusão de palavras!\n\n";
   cout << "Desembaralhe as letras para formar uma palavra. \n";
   cout << " Digite 'dica' para uma dica.\n";
   cout << "Digite 'sair' para sair do jogo.\n";
   cout << "A confusao eh: " << confusao;

   string adivinhar;
   cout << "\n\n seu palpite: ";
   cin >> adivinhar;

   while((adivinhar != aPalavra) && (adivinhar != "sair")){
        if(adivinhar == "dica"){
            cout << aDica;

        }else{
            cout << "Desculpe, nao eh isso.";
        }

        cout << "\n\nSeu palpite: ";
        cin >> adivinhar;
   }

   if (adivinhar == aPalavra)
   {
    cout << "\neh isso! voce adivinhou\n";
   }
   
   cout << "\n Obrigado por jogar.";

   return 0;
}