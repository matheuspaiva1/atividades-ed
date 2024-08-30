// Arquivo de execucao
#include <iostream>
#include "lib.h"

using std::cout;
using std::endl;

#include <iostream>
using namespace std;
ListaEncadeadaSimples* criar_lista(){
    ListaEncadeadaSimples *lista = new ListaEncadeadaSimples();
    lista->cabeca = NULL;
    lista->cauda = NULL;
    return lista;

    
}

// Retorna true se uma informacao pertence a lista, false caso contrario
// chave: valor buscado
bool busca(ListaEncadeadaSimples* lista, int chave){
    // TODO

    Nodo* newNode = new Nodo;

    while (newNode != nullptr){
        if(newNode->chave = chave){
          return true;
        }
    }
    return false;
    
}

// Adiciona um elemento no inicio da lista
// info: informacao do elemento a ser inserido
void insere_inicio(ListaEncadeadaSimples* lista, int chave){
    // TODO
    Nodo* newNode = new Nodo;
    int proximo = newNode->proximo;
    int primeiro = lista->cabeca;

    while (newNode != nullptr){
      newNode->chave = chave;
      proximo = primeiro;
      primeiro = newNode;
    }
    

}
// Exemplo:
// L == 10 -> 20 -> 15 -> 50
// insere_inicio(L, 30)
// L == 30 -> 10 -> 20 -> 15 -> 50

// Adiciona um elemento ao final da lista
// chave: informacao do elemento a ser inserido
void insere_final(ListaEncadeadaSimples* lista, int chave){
    // TODO
    Nodo* newNode = new Nodo;
    int proximo = newNode->proximo;

    int ultimo = lista->cauda;
    
    while (newNode != nullptr){
      newNode->chave = chave;
      newNode->proximo = ultimo;
      ultimo = newNode;
    }
}
// Exemplo:
// L == 10 -> 20 -> 15 -> 50
// insere_final(L, 30)
// L == 10 -> 20 -> 15 -> 50 -> 30


// Remove o primeiro elemento da lista.
// Nao faz nada se a lista esta vazia
void remove_inicio(ListaEncadeadaSimples* lista, int chave){
    // TODO
    Nodo* newNode = new Nodo;
    if(newNode->proximo != nullptr){
      newNode->chave = chave;
      lista->cabeca = newNode->chave;
    }
    
}
// Exemplo:
// L == 10 -> 20 -> 15 -> 50
// remove_inicio(L)
// L == 20 -> 15 -> 50


// Remove o ultimo elemento da lista.
// Nao faz nada se a lista esta vazia
void remove_ultimo(ListaEncadeadaSimples* lista){
    // TODO
    Nodo* newNode = new Nodo;
    if(newNode->proximo == nullptr){
      newNode->proximo = lista->cabeca->proximo;
    }
}
// Exemplo:
// L == 10 -> 20 -> 15 -> 50
// remove_ultimo(L)
// L == 10 -> 20 -> 15


// Deixa a lista vazia, com zero elementos
void limpar(ListaEncadeadaSimples* lista){
    // TODO
    Nodo* newNode = new Nodo;
    if(newNode != nullptr){
      lista->cabeca = nullptr;
    }
}
// Exemplo:
// L == 10 -> 20 -> 15 -> 50
// limpar(L)
// L == ''


// Devolve o numero de elementos da lista
int tamanho(ListaEncadeadaSimples* lista){
    //TODO
    Nodo* newNode = new Nodo;
    int tamanho = 0;

    while(newNode != nullptr){
      tamanho++;
      newNode = newNode->proximo;
    }
    
}
// Exemplo:
// L == 10 -> 20 -> 15 -> 50
// tamanho(L) == 4


// Devolve true se cheia e false caso contrario
bool vazio(ListaEncadeadaSimples* lista){
    // TODO
    Nodo* newNode = new Nodo;
    if(lista->cauda != nullptr){
      return true
    }
    return false;
}
// Exemplo:
// L == 10 -> 20 -> 15 -> 50
// vazio(L) == false
// L == []
// vazio(L) == true


// Printa as informacoes da lista
void print(){
    // TODO
    Nodo* newNode = new Nodo;
    while (newNode != nullptr) {
        cout << newNode->chave << " "; // Printar o dado do nó atual
        newNode = newNode->proximo;             // Avançar para o próximo nó
    }

}

int main(){
    cout << "Hello world" << endl;
}
