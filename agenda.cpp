#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct pessoa{
    string nome;
    int ddd;
    int tel;
    string cid;
};

int main(){

    struct pessoa p1[3];
    int i;

    for(i=0;i<3;i++){
        cout << "Digite o nome da pessoa " << i+1 << ":";
        cin >> p1[i].nome;
        cout << "\033[2J\033[1;1H";

        cout << "Digite o DDD da pessoa " << i+1 << ":";
        cin >> p1[i].ddd;
        cout << "\033[2J\033[1;1H";

        cout << "Digite o telefone da pessoa " << i+1 << ":";
        cin >> p1[i].tel;
        cout << "\033[2J\033[1;1H";

        cout << "Digite a cidade da pessoa " << i+1 << ":";
        cin >> p1[i].cid;
        cout << "\033[2J\033[1;1H";
    }

    for (i = 0; i < 3; i++) { // fixed the loop bounds
        if (p1[i].cid == "Botucatu" || p1[i].cid == "botucatu") {
            cout << "Dados da pessoa numero " << i+1 << ":" << endl; // added line break
            cout << "Nome: " << p1[i].nome << endl; // added line break
            cout << "Telefone: " << p1[i].ddd << p1[i].tel << endl; // added line break
            cout << "Cidade: " << p1[i].cid << endl; // added line break
        }
    }

    return 0;

}
