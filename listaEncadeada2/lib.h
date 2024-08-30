#include <iostream>

// Nodo: classe utilizada para representar um No
// Nao altere essa classe
struct Nodo {
    int chave; // Informacao salva pelo usuario na lista
    Nodo *proximo; // Ponteiro para o proximo elemento da lista 
};

// Lista Simplesmente Encadeada
struct ListaEncadeadaSimples {
    Nodo *cabeca;   // Ponteiro para a cabeca da lista (primeiro No)
    Nodo *cauda;   // Ponteiro para a cauda da lista (ultimo No)
};

ListaEncadeadaSimples* criar_lista();
bool busca(ListaEncadeadaSimples* lista, int chave);
void insere_inicio(ListaEncadeadaSimples* lista, int chave);
void insere_final(ListaEncadeadaSimples* lista, int chave);
void remove_inicio(ListaEncadeadaSimples* lista, int chave);
void remove_ultimo(ListaEncadeadaSimples* lista);
void limpar(ListaEncadeadaSimples* lista);
int tamanho(ListaEncadeadaSimples* lista);
bool vazio(ListaEncadeadaSimples* lista);
void print();
