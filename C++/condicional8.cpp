#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    int opcao;
    double num1, num2, resultado;

   
    cout << "Menu de op��es:\n";
    cout << "1. Somar dois n�meros\n";
    cout << "2. Raiz quadrada de um n�mero\n";
    cout << "Digite a op��o desejada: ";
    cin >> opcao;


    if (opcao == 1) {
      
        cout << "Digite o primeiro n�mero: ";
        cin >> num1;
        cout << "Digite o segundo n�mero: ";
        cin >> num2;
        resultado = num1 + num2;
        cout << "A soma dos n�meros �: " << resultado << endl;
    } 
    else if (opcao == 2) {
     
        cout << "Digite um n�mero: ";
        cin >> num1;
        if (num1 >= 0) {
            resultado = sqrt(num1);
            cout << "A raiz quadrada de " << num1 << " �: " << resultado << endl;
        } else {
            cout << "N�o � poss�vel calcular a raiz quadrada de um n�mero negativo." << endl;
        }
    }

    return 0;
}

