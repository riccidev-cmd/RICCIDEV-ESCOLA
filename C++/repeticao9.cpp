#include <iostream>
#include <cmath>
#include <locale>
#include <stdio.h>
using namespace std;
int main(){
	int salario,quantidade;
	float  novo, bonificacao, auxilio;
	
	cout << "=Digite O Seu Salario=:"<< endl;
	cin >> salario;
	
	if(salario <= 500 ){
	bonificacao = salario * 0.05;
	}
	else if (salario >= 500 && salario <= 1200){
	  bonificacao = salario * 0.12;
	  
	}else{
		bonificacao = 0;
	}
	if (salario <= 600 ){
	 auxilio = 150;
	 
	}else{
	   auxilio = 100;
	}
	
	novo = salario + bonificacao + auxilio ;
	
	cout << "Seu salario com bonificacao sera: " << salario + bonificacao << endl;
    cout << "Seu salario com auxilio sera: " << salario + auxilio << endl;
    cout << "Seu novo salario total e: " << novo << endl;
	
	//para
	cout << "=Digite a Quantidade de Funcionarios=:"<< endl;
	cin >> quantidade;
	
	for(int i = quantidade; quantidade <= 100; i--){
		cout << "=A Quantidade de Funcionarios Eh:="<< i << endl;
		
		cout << "=Digite O Salario do Seu Funcionario=:"<< endl;
	cin >> salario;
	
	if(salario <= 500 ){
	bonificacao = salario * 0.05;
	}
	else if (salario >= 500 && salario <= 1200){
	  bonificacao = salario * 0.12;
	  
	}else{
		bonificacao = 0;
	}
	if (salario <= 600 ){
	 auxilio = 150;
	 
	}else{
	   auxilio = 100;
	}
	
	novo = salario + bonificacao + auxilio ;
	
	cout << "Seu salario com bonificacao sera: " << salario + bonificacao << endl;
    cout << "Seu salario com auxilio sera: " << salario + auxilio << endl;
    cout << "Seu novo salario total e: " << novo << endl;

	}
	
	return 0;
}  
