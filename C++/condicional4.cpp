#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3, temp;

    cout << "Digite o primeiro n�mero: ";
    cin >> num1;
    cout << "Digite o segundo n�mero: ";
    cin >> num2;
    cout << "Digite o terceiro n�mero: ";
    cin >> num3;

    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 > num3) {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }


    cout << "Os n�meros em ordem crescente s�o: " << num1 << ", " << num2 << ", " << num3 << endl;

    return 0;
}







