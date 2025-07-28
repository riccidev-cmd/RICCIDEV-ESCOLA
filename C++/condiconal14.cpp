#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int opcao;
    float lado, base, altura, baseMenor, baseMaior, diagonalMaior, diagonalMenor;

    do {
       
        cout << "\nMenu de opcoes:" << endl;
        cout << "1. Triangulo equilatero" << endl;
        cout << "2. Triangulo retangulo" << endl;
        cout << "3. Triangulo" << endl;
        cout << "4. Quadrado" << endl;
        cout << "5. Retangulo" << endl;
        cout << "6. Trapezio" << endl;
        cout << "7. Paralelogramo" << endl;
        cout << "8. Hexagono" << endl;
        cout << "9. Losango" << endl;
        cout << "0. Sair" << endl;
        cout << "Digite a opcao desejada: ";
        cin >> opcao;

       
        if (opcao == 1) {
            cout << "Digite o valor do lado do triangulo equilatero: ";
            cin >> lado;
            cout << "Area do triangulo equilatero: " << (sqrt(3) / 4) * pow(lado, 2) << endl;
        }
        else if (opcao == 2) {
            cout << "Digite o valor da base e da altura do triangulo retangulo: ";
            cin >> base >> altura;
            cout << "Area do triangulo retangulo: " << (base * altura) / 2 << endl;
        }
        else if (opcao == 3) {
            cout << "Digite o valor da base e da altura do triangulo: ";
            cin >> base >> altura;
            cout << "Area do triangulo: " << (base * altura) / 2 << endl;
        }
        else if (opcao == 4) {
            cout << "Digite o valor do lado do quadrado: ";
            cin >> lado;
            cout << "Area do quadrado: " << lado * lado << endl;
        }
        else if (opcao == 5) {
            cout << "Digite o valor da base e da altura do retangulo: ";
            cin >> base >> altura;
            cout << "Area do retangulo: " << base * altura << endl;
        }
        else if (opcao == 6) {
            cout << "Digite o valor da base menor, base maior e da altura do trapezio: ";
            cin >> baseMenor >> baseMaior >> altura;
            cout << "Area do trapezio: " << ((baseMenor + baseMaior) * altura) / 2 << endl;
        }
        else if (opcao == 7) {
            cout << "Digite o valor da base e da altura do paralelogramo: ";
            cin >> base >> altura;
            cout << "Area do paralelogramo: " << base * altura << endl;
        }
        else if (opcao == 8) {
            cout << "Digite o valor do lado do hexagono: ";
            cin >> lado;
            cout << "Area do hexagono: " << (3 * sqrt(3) * pow(lado, 2)) / 2 << endl;
        }
        else if (opcao == 9) {
            cout << "Digite o valor da diagonal maior e diagonal menor do losango: ";
            cin >> diagonalMaior >> diagonalMenor;
            cout << "Area do losango: " << (diagonalMaior * diagonalMenor) / 2 << endl;
        }
        else if (opcao != 0) {
            cout << "Opcao invalida. Tente novamente." << endl;
        }

    } while (opcao != 0);

    cout << "Saindo..." << endl;

    return 0;
}

