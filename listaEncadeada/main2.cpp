#include <iostream>
using namespace std;

struct no{
  int chave;
  no* proximo;
};

// 1 2 3 4 5
// 3 4 6 7 1
// verdadeiro

bool verificaDoisNos(no*& no1, no*& no2){
  if (no1 == nullptr || no2 == nullptr){
      return false;
  }
  return no1->chave == no2->chave;

}

void insertAtBeginning(no*& head, int newData) {
    no* newNode = new no();
  
    newNode->chave = newData;
    newNode->proximo = head;
    head = newNode;
}

void printList(no* novoNo) {
    while (novoNo != nullptr) {
        cout << novoNo->chave << " ";
        novoNo = novoNo->proximo;
    }
    cout << endl;
  }

int retornaSeOrdenado(no*& novoNo) {
    if(novoNo == nullptr || novoNo->proximo == nullptr){
      return true;
    } 
    no* atual = novoNo;

    while (atual->proximo == nullptr){
      if(atual->chave > atual->proximo->chave){
        return false;
      }
      atual = atual->proximo;
    }
    return true;
  }

int main(){

  no* primeiro = nullptr;

  insertAtBeginning(primeiro, 1);
  insertAtBeginning(primeiro, 2);
  insertAtBeginning(primeiro, 3);
  insertAtBeginning(primeiro, 8);
  insertAtBeginning(primeiro, 5);

  if(retornaSeOrdenado(primeiro)){
    cout << "Lista ordenada";
  } else {
    cout << "Lista nao ordenada";
  }





  // no* no1 = primeiro;         // Primeiro nó (com valor 30)
  // no* no2 = primeiro->proximo;   // Segundo nó (com valor 20)
  // no* no3 = primeiro->proximo->proximo; // Terceiro nó (com valor 10)

  // if (verificaDoisNos(no1, no2)) {
  //       cout << "Os nós 1 e 2 têm valores iguais." << endl;
  //   } else {
  //       cout << "Os nós 1 e 2 têm valores diferentes." << endl;
  //   }

  //   if (verificaDoisNos(no2, no3)) {
  //       cout << "Os nós 2 e 3 têm valores iguais." << endl;
  //   } else {
  //       cout << "Os nós 2 e 3 têm valores diferentes." << endl;
  //   }


  // cout << "Lista: ";
  // printList(primeiro);
  // printList2(primeiro2);





  return 0;
}