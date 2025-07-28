#include <iostream>
#include <cmath>                        
using namespace std;

int main() {
    int opcao, funcionarios;
    float salario_atual, novo_salario;
    
    cout << "Qual seu salario atual?: " << endl;
    cin >> salario_atual; 
    
    cout << "======= Menu de Opcoes =======" << endl;
    cout << "1. Escrituario" << endl;
    cout << "2. Secretario" << endl;
    cout << "3. Caixa" << endl;
    cout << "4. Gerente" << endl;
    cout << "5. Diretor" << endl;
    cout << "Escolha uma opcao: ";
    cin >> opcao;

    if (opcao == 1) {
        cout << "Voce selecionou Escrituario." << endl;
        novo_salario = salario_atual + (salario_atual * 50 / 100);
        cout << "Seu novo salario eh: " << novo_salario << endl;
    } else if (opcao == 2) {
        cout << "Voce selecionou Secretario." << endl;
        novo_salario = salario_atual + (salario_atual * 35 / 100);
        cout << "Seu novo salario eh: " << novo_salario << endl;
    } else if (opcao == 3) {
        cout << "Voce selecionou Caixa." << endl;
        novo_salario = salario_atual + (salario_atual * 20 / 100);
        cout << "Seu novo salario eh: " << novo_salario << endl;
    } else if (opcao == 4) {
        cout << "Voce selecionou Gerente." << endl;
        novo_salario = salario_atual + (salario_atual * 10 / 100);
        cout << "Seu novo salario eh: " << novo_salario << endl;
    } else if (opcao == 5) {
        cout << "Voce selecionou Diretor." << endl;
        novo_salario = salario_atual; 
        cout << "Seu salario permanece: " << novo_salario << endl;
    } else {
        cout << "Opcao invalida! Tente novamente." << endl;
    }


    cout << "Quantos funcionarios voce deseja listar?: ";
    cin >> funcionarios;


    for (int i = 1; i <= funcionarios; i++) {
        cout << "Funcionario " << i << endl;
    }

    return 0;
}

