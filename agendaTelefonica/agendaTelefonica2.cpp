#include <iostream>

using namespace std;

struct Contato {
    string nome;
    string telefone;
};

int main() {
    const int MAX_CONTATOS = 100;
    Contato contatos[MAX_CONTATOS];
    int numContatos = 0;

    char opcao;
    do {
        cout << "\nEscolha uma opção:\n";
        cout << "1. Inserir contato\n";
        cout << "2. Listar contatos\n";
        cout << "3. Buscar contato\n";
        cout << "4. Remover contato\n";
        cout << "5. Sair\n";
        cout << "Opção: ";
        cin >> opcao;

        switch (opcao) {
            case '1': {
                if (numContatos < MAX_CONTATOS) {
                    cout << "Digite o nome do contato: ";
                    cin >> contatos[numContatos].nome;
                    cout << "Digite o telefone do contato: ";
                    cin >> contatos[numContatos].telefone;
                    numContatos++;
                    cout << "Contato adicionado com sucesso." << endl;
                } else {
                    cout << "Agenda cheia! Não é possível adicionar mais contatos." << endl;
                }
                break;
            }
            case '2': {
                if (numContatos == 0) {
                    cout << "Agenda vazia!" << endl;
                } else {
                    cout << "Lista de Contatos:" << endl;
                    for (int i = 0; i < numContatos; ++i) {
                        cout << "Nome: " << contatos[i].nome << ", Telefone: " << contatos[i].telefone << endl;
                    }
                }
                break;
            }
            case '3': {
                if (numContatos == 0) {
                    cout << "Agenda vazia!" << endl;
                } else {
                    cout << "Digite o nome do contato que deseja buscar: ";
                    string nomeBusca;
                    cin >> nomeBusca;
                    bool encontrado = false;
                    for (int i = 0; i < numContatos; i++) {
                        if (contatos[i].nome == nomeBusca) {
                            cout << "Contato encontrado: " << contatos[i].nome << ", " << contatos[i].telefone << endl;
                            encontrado = true;
                            break;
                        }
                    }
                    if (!encontrado) {
                        cout << "Contato não encontrado." << endl;
                    }
                }
                break;
            }
            case '4': {
                if (numContatos == 0) {
                    cout << "Agenda vazia!" << endl;
                } else {
                    cout << "Digite o nome do contato que deseja remover: ";
                    string nomeRemover;
                    cin >> nomeRemover;
                    bool encontrado = false;
                    for (int i = 0; i < numContatos; ++i) {
                        if (contatos[i].nome == nomeRemover) {
                            for (int j = i; j < numContatos - 1; ++j) {
                                contatos[j] = contatos[j + 1];
                            }
                            numContatos--;
                            cout << "Contato removido com sucesso." << endl;
                            encontrado = true;
                            break;
                        }
                    }
                    if (!encontrado) {
                        cout << "Contato não encontrado." << endl;
                    }
                }
                break;
            }
            case '5':
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opção inválida!" << endl;
        }
    } while (opcao != '5');

    return 0;
}
