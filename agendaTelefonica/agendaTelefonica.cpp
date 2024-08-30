#include <iostream>

using namespace std;
// criando struct para armazenar os dados de cada elemento do vetor
struct Contato {
  string nome;
  // elemento que armazena os nomes dos contatos
  string numero;
  // elemento que armazena os numeros dos contatos
};

int main() {
  const int MAX = 100;
  // variavel para estipular numero maximo de contatos
  Contato contatos[MAX];
  // criando instancia para representar o vetor
  int numContatos = 0;
  // variavel representando a quantidade de contatos cadastrados
 char opc;
 // variavel para colocar a opção no CRUD
  do {
    // MENU do CRUD
    cout << endl << "Agenda de Contatos" << endl;
    cout << "Digite 1 para inserir contato" << endl;
    cout << "Digite 2 para listar os contatos" << endl;
    cout << "Digite 3 para obter um contato" << endl;
    cout << "Digite 4 para remover um contato" << endl;
    cout << "Digite 5 para sair" << endl;
    cin >> opc;

    // switch - mecanismo de repetição onde é colocado a variavel opc como condição para entrar, e cada caso contendo os numeros para entrar em cada funcionalidade
    switch (opc){

    // INSERIR CONTATOS
    case '1': {
      if(numContatos < MAX){ // verificar se o numero de contatos excede o numero maximo estipulado
        cout << "Digite o nome do contato: " << endl;
        cin >> contatos[numContatos].nome; // adicionando o elemento digitado pelo usuario no vetor na parte do -nome-
        cout << "Digite o numero do contato: " << endl;
        cin >> contatos[numContatos].numero;// adicionando o elemento digitado pelo usuario no vetor na parte do -numero-
        numContatos++; // adicionado +1, no numero de contatos
      }
      break;
    }
      
    // LISTAR CONTATOS
    case '2': {
      if (numContatos != 0){
        cout << "Lista de contatos: " << endl;
        for (int i = 0; i < numContatos; i++){ // percorrendo o vetor, para verificar se cada posição está correta
          cout << contatos[i].nome << " - " << contatos[i].numero << endl; // listando cada elemento que está no vetor, contatos[i] representa o vetor e a posição na qual i está e .nome especifica qual o elemento daquele item, a mesma coisa com numeros
        }
      }
      break;
    }
      
    // BUSCAR CONTATOS
    case '3': {
      if (numContatos != 0){
        string buscaNome;
        // cria variavel buscaNome para usuario digitar o nome do contato a ser pesquisado
        cout << "Digite o nome do contato que você quer buscar: " << endl;
        cin >> buscaNome;

        for (int i = 0; i < numContatos; i++){ // percorrendo o vetor, para verificar se cada posição está correta
          if(contatos[i].nome == buscaNome){ // verificando se há algum elemento no vetor que é igual a que foi digitado pelo usuario
            cout << contatos[i].nome << " - " << contatos[i].numero << endl; // listando o contato que foi procurado
            
            break;
          }
        }
      }
      break;
    }
    
    // REMOVER CONTATO
    case '4':{
      if (numContatos != 0){
        string removerNome;
        // cria variavel buscaNome para usuario digitar o nome do contato a ser removido
        cout << "Digite o nome do contato que você quer remover: " << endl;
        cin >> removerNome;
        for (int i = 0; i < numContatos; i++){ // percorrendo o vetor
          if(contatos[i].nome == removerNome){ // verificando se há algum elemento igual ao nome digitado
            for(int k = 0;k < numContatos - 1; k++){ 
              contatos[k] = contatos[k + 1];
            }
            numContatos--; // eliminar a quantidade de contatos
            cout << "Contato removido" << endl;
            
            break;
          } else{
            cout << "Esse contato não existe" << endl;
          }
        }
      }
      break;
    }
     
    }
  } while(opc != '5');

  return 0;
}
