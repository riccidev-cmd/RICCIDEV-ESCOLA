#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int num1,num2;
	cout << " Digite um Numero:";
	cin >> num1;
	cout << "Digite um outro Numero:";
	cin >> num2;
     if (num1 > num2) {
            cout << "O numero maior eh o: " << num1 << endl;
        } else if (num2 > num1) {
            cout << "O numero maior eh o: " << num2 << endl;
        } else {
            cout << "Os numeros sao iguais. Tente novamente!" << endl;
        } 
   
	
	return 0;
}

