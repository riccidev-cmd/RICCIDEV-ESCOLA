#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int salario, opcao;
    float bonificacao = 0, auxilio_escola = 0;

    cout << "Digite seu Salario atual: ";
    cin >> salario;

    cout << "== Menu de Opcoes ==" << endl;
    cout << "1. Salario com Bonificacao Normal" << endl;
    cout << "2. Salario com Auxilio Escola" << endl;
    cout << "Digite sua Opcao: ";
    cin >> opcao;
    
    

    if (opcao == 1) { 
        if (salario <= 500) {
            bonificacao = 0.05 * salario;
        } else if (salario > 500 && salario <= 1200) {
            bonificacao = 0.12 * salario;
        } else {
  
  
        }
        cout << "Seu salario com bonificacao eh: " << (salario + bonificacao) << endl;
    } else if (opcao == 2) { 
  
        if (salario <= 600) {
            auxilio_escola = 150;
        } else {
            auxilio_escola = 100;
        }
        cout << "Seu salario com auxilio escola eh: " << (salario + auxilio_escola) << endl;

    } else {


        cout << "Opcao invalida!" << endl;
    }

    return 0;
}


