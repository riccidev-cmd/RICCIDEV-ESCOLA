#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int opcao,soma, raiz;
	float num1,num2,numraiz;
	// menu
	cout << "==== MENU DE OPCOES ====" << endl;
	cout << " 1 . Somar dois Numeros:"<< endl;
	cout << " 2 .Raiz Quadrada:" << endl;
	cout << "Digite a Opcao Desejada:" << endl;
	cin >> opcao;
	if( opcao == 1 ){
	cout << "Voce escolheu a soma de dois numeros." << endl;
	cout << "Qual eh o primeiro numero q deseja somar:?" << endl;
	cin >> num1;
	cout << "Qual eh o segundo numero q deseja somar:?"  << endl;
	cin >> num2;
	soma = num1 + num2;
	cout << "A soma de " << num1 << " e " << num2 << " eh " << soma << endl;
	}
	else if (opcao == 2){
		cout << " Voce escolheu a Raiz Quadrada."<< endl;
		cout << " Digite o numero q quer realizar a raiz quadrada:" << endl;
		cin >> numraiz;
		raiz = sqrt(numraiz);
		  cout << "A raiz quadrada de " << numraiz << " eh " << raiz << endl;
	}
	 
	return 0;
}
