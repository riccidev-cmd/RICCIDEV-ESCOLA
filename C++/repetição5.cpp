#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int quantidade;
	float num, soma = 0;
	//recebendo os numeros
	cout << "Digite um Numero:\n";
	cin >> num;

	 cout << "Digite a quantidade de numeros a serem somados\n:";
	 cin >> quantidade;
	
	for(int i=1; i<=quantidade; i++){
		cout << "Digite o numero" << i << ":";
		cin >> num;
		soma += num;
	}
	cout << " A soma dos numeros eh:\n" << soma << endl;

   return 0;
}
