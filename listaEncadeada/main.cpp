#include <iostream>

using namespace std;

struct no{
  int chave;
  no* proximo;
};


struct no2{
  int chave2;
  no* proximo2;
};

// 1 2 3 4 5
// 3 4 6 7 1
// verdadeiro

int verificaDoisNos(no*& primeiro, no2*& primeiro2){
  no* atual = primeiro;
  no2* atual2 = primeiro2;

  while (atual != nullptr && atual2 != nullptr){
    if(atual->chave == atual2->chave2){
      return true;
    }
    atual = atual->proximo;
  }

  return atual->chave;
  
}

void insertAtBeginning(no*& head, int newData) {
    no* newNode = new no();
    

    newNode->chave = newData;
    newNode->proximo = head;
    head = newNode;

    
}

void insertAtBeginning2(no2*& head, int newData) {
  no2* newNode2 = new no2();
  newNode2->chave2 = newData;
  newNode2->proximo2 = head;
  head = newNode2;

}

void retornarElementoNoI(no*& primeiro, int indice){
  no* atual = primeiro;

  int count = 0;

  while (atual != nullptr) {
    if(count == indice) {
      return atual->chave;
    }
    count++;
    atual = atual->proximo;
  }
};

int verificarElementoPorChave(no*& primeiro, int chave){
  no* atual = primeiro;

  while (atual != nullptr) {
    if(chave == atual->chave){
      return true;
    }
    atual = atual->proximo;
  }
}

int retornaTamanho(no*& primeiro){
  no* atual = primeiro;
  int count = 0;

  while (atual != nullptr) {
    count++;
    atual = atual->proximo;
  }

  return count;

}

  void printList(no* novoNo) {
    while (novoNo != nullptr) {
        cout << novoNo->chave << " ";
        novoNo = novoNo->proximo;
    }
    cout << endl;
  }

  


  


int main(){
    
    no* primeiro = nullptr;
    no2* primeiro2 = nullptr;

    insertAtBeginning(primeiro, 1);
    insertAtBeginning(primeiro, 2);
    insertAtBeginning(primeiro, 3);

    insertAtBeginning2(primeiro2, 4);
    insertAtBeginning2(primeiro2, 1);
    insertAtBeginning2(primeiro2, 3);


    cout << "Lista: ";
    printList(primeiro);

    // Exemplo de uso da função getElementAt
    try {
        // int indice = 1;
        // int element = retornarElementoNoI(primeiro, 1);
        // cout << "Elemento na posicao " << indice << " eh: " << element << endl;
      cout << verificaDoisNos(primeiro,primeiro2) << endl;


    } catch (const out_of_range& e) {
        cout << e.what() << endl;
    }

    // Liberação da memória alocada
    while (primeiro != nullptr) {
        no* atual = primeiro;
        primeiro = primeiro->proximo;
        delete atual;
    }
}