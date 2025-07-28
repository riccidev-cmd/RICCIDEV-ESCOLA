#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float nota1, nota2, nota3, media_ar;

    cout << "Digite sua Primeira Nota:" << endl;
    cin >> nota1;
    cout << "Digite sua Segunda Nota:" << endl;
    cin >> nota2;
    cout << "Digite sua Terceira Nota:" << endl;
    cin >> nota3;

    media_ar = (nota1 + nota2 + nota3) / 3;
    cout << "A média Aritmética é: " << media_ar << endl;
 
    if (media_ar >= 7 && media_ar <= 10) {
        cout << "Você está aprovado" << endl;
    } else if (media_ar >= 3 && media_ar < 7) {
        cout << "Você está de exame" << endl;
    } else if (media_ar >= 0 && media_ar < 3) {
        cout << "Você está reprovado" << endl;
    } else {
        cout << "Média inválida!" << endl;
    }
    return 0;
}

