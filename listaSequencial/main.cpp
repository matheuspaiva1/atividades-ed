#include <iostream>
using namespace std;

int ultimoIndice(int lista[], int chave, int tamanho){
  int recebI;
  // 1 2 2 3 5
  for (int i = 0; i < tamanho; i++){
    if (lista[i] == chave){
      recebI = i;
    }
    lista[i] = lista[i + 1];
  }
  cout << recebI << endl;
}

int contador(int lista[], int chave, int tamanho){
  int count;
  // 1 2 2 3 5
  for (int i = 0; i < tamanho; i++){
    if (lista[i] == chave){
      count++;
    }
  }
  cout << count << endl;
}

int removePorIx(int lista[], int chave, int tamanho){
  // 1 2 2 3 5
  for (int i = 0; i < tamanho; i++){
    if (lista[i] == chave){
      lista[i] = lista[i+1];
    }
  }
  cout << lista << endl;

}

int main (){
  int tamanho = 4;

  int lista[tamanho] = {1,2,3,4,5};

   cout << removePorIx(lista, 2, tamanho);  

  // cout << ultimoIndice(lista, 2, tamanho);

  return 0;
}