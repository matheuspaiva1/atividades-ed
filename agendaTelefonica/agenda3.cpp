#include <iostream>
#include <optional>
using namespace std;
// criando struct para armazenar os dados de cada elemento do vetor
struct Contato {
  string nome;
  // elemento que armazena os nomes dos contatos
  string numero;
  // elemento que armazena os numeros dos contatos
};

class ListaSequencial {
  private:
	  Contato vetor[5];
	  int tamanho;
	
	public:
    ListaSequencial(){
      tamanho = 0;
    }
    int obterTamanho() { 
      return tamanho; 
    }

		int inserir(Contato elemento) {
      vetor[tamanho] = elemento;
      tamanho++;

      return tamanho - 1;
    };

		bool removerIndiceShift(int indice) {
      if (indice < 0 || indice >= tamanho) 
      {
        return false;
      } 

      for (int i = indice; i <= tamanho-2; i++) { // percorrendo o vetor
          vetor[i] = vetor[i + 1];
      }

      tamanho--;
    };

		optional<Contato> obter(int indice) {
      if(indice >= 0 && indice < tamanho) {
        // indice valido
        return optional(vetor[indice]);
      } else{
        // indice invalido
        return nullopt;
      }
    };
};

int main() {
  
  ListaSequencial agenda;

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
        Contato novoContato;
        cout << "Digite o nome do contato: " << endl;
        cin >> novoContato.nome; // adicionando o elemento digitado pelo usuario no vetor na parte do -nome-
        cout << "Digite o numero do contato: " << endl;
        cin >> novoContato.numero;// adicionando o elemento digitado pelo usuario no vetor na parte do -numero-

        agenda.inserir(novoContato);
      break;
    }
      
    // LISTAR CONTATOS
    case '2': {
        cout << "Lista de contatos: " << endl;
        for (int i = 0; i < agenda.obterTamanho(); i++){ // percorrendo o vetor, para verificar se cada posição está correta
          optional<Contato> c = agenda.obter(i);

          if(c.has_value()){
            Contato contato = *c;

            cout << contato.nome << endl;
            cout << contato.numero << endl;

          }
        }
      }
      break;
      
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
        int indice;
        // cria variavel buscaNome para usuario digitar o nome do contato a ser removido
        cout << "Digite o nome do contato que você quer remover: " << endl;
        cin >> indice;
        
        agenda.removerIndiceShift(indice);
      break;
    }
     
    }
  } while(opc != '5');

  return 0;
}
