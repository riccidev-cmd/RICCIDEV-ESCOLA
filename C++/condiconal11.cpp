#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int opcao , salario;
	float imposto = 0, aumento = 0 , classificacao = 0;
	//salario
	cout << " Digite seu Salario Primeiramente:";
	cin >> salario;
	/// menu 
	  cout << "===Menu de Opcoes==="<< endl;
	  cout << "1. Imposto" << endl;
	  cout << "2. Novo Salario"<< endl;
	  cout << "3. Classificacao"<< endl;
	  cout << " Digite a Opcao Desejada: "<< endl;
	  cin >> opcao;
	  //imposto
	  if (opcao == 1){
	}
 	  if (salario <= 500){
		imposto = 0.05 * salario;
	}
	  else if (salario <= 500 && salario >= 850){
	    imposto = 0.10 * salario;
	}
	  else if (salario >= 850){
	  	imposto = 0.15 * salario;
	}
	cout << " Seu percentual de Imposto a Partir de seu Salario eh::" << imposto << endl;
	// aumento
	 if(opcao == 2){
	}
	 if (salario >= 1500){
	 	aumento = salario + 25 ;
	 }
	   else if (salario >= 750 && salario <= 1500 ){
	 	aumento = salario + 50 ;
	 }
	  else if (salario >= 450 && salario <= 750){
	 	aumento = salario + 75 ;
	 }
	  else if (salario <= 450){
	 	aumento = salario + 100 ;
	  }
	 cout << " Seu aumento em seu salario eh de::"<< aumento << endl;
	 // classificacao
	 if(opcao == 3 ){
	}
	 if (salario <= 700){
	 	cout << " Seu salario esta Mal Remunerado " << classificacao << endl;
	 }
	   else if (salario >= 700 ){
	 	cout << " Seu salario esta Bem Remunerado "<< classificacao << endl;
	 }else{
	 }
	//bota o coracao na geladeira
	return 0;
}


