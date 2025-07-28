#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    int opcao;
    double num1, num2, resultado;

   
    cout << "Menu de opções:\n";
    cout << "1. Somar dois números\n";
    cout << "2. Raiz quadrada de um número\n";
    cout << "Digite a opção desejada: ";
    cin >> opcao;


    if (opcao == 1) {
      
        cout << "Digite o primeiro número: ";
        cin >> num1;
        cout << "Digite o segundo número: ";
        cin >> num2;
        resultado = num1 + num2;
        cout << "A soma dos números é: " << resultado << endl;
    } 
    else if (opcao == 2) {
     
        cout << "Digite um número: ";
        cin >> num1;
        if (num1 >= 0) {
            resultado = sqrt(num1);
            cout << "A raiz quadrada de " << num1 << " é: " << resultado << endl;
        } else {
            cout << "Não é possível calcular a raiz quadrada de um número negativo." << endl;
        }
    }

    return 0;
}

