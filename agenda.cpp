#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

struct pessoa{
    char nome[10];
    int ddd;
    int tel;
    char cid[10];
};

int main(){

    struct pessoa p1[10];
    int i;

    for(i=1;i<11;i++){
        cout << "Digite o nome da pessoa " << i << ":";
        cin >> p1[i].nome;

        cout << "Digite o DDD da pessoa " << i << ":";
        cin >> p1[i].ddd;

        cout << "Digite o telefone da pessoa " << i << ":";
        cin >> p1[i].tel;

        cout << "Digite a cidade da pessoa " << i << ":";
        cin >> p1[i].cid;
    }

    return 0;

}
