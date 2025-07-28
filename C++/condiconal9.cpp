#include <iostream>

using namespace std;

int main() {
    int codigo;
    double salarioAtual, aumento, novoSalario;

  
    cout << "Tabela de cargos:\n";
    cout << "1. Escriturário - 50%\n";
    cout << "2. Secretário - 35%\n";
    cout << "3. Caixa - 20%\n";
    cout << "4. Gerente - 10%\n";
    cout << "5. Diretor - Não tem aumento\n";

    
    cout << "\nDigite o código do cargo (1 a 5): ";
    cin >> codigo;
    cout << "Digite o salário atual: ";
    cin >> salarioAtual;

    
    if (codigo == 1) {
        aumento = salarioAtual * 0.50;  
        novoSalario = salarioAtual + aumento;
        cout << "Cargo: Escriturário\n";
    } 
    else if (codigo == 2) {
        aumento = salarioAtual * 0.35;  
        novoSalario = salarioAtual + aumento;
        cout << "Cargo: Secretário\n";
    } 
    else if (codigo == 3) {
        aumento = salarioAtual * 0.20;  
        novoSalario = salarioAtual + aumento;
        cout << "Cargo: Caixa\n";
    } 
    else if (codigo == 4) {
        aumento = salarioAtual * 0.10;  
        novoSalario = salarioAtual + aumento;
        cout << "Cargo: Gerente\n";
    } 
    else if (codigo == 5) {
        aumento = 0; 
        novoSalario = salarioAtual;
        cout << "Cargo: Diretor\n";
    } 
    else {
        cout << "Código de cargo inválido.\n";
        return 1; 
    }

    
    cout << "Valor do aumento: R$ " << aumento << endl;
    cout << "Novo salário: R$ " << novoSalario << endl;

    return 0;
}

