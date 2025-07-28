#include <iostream>
#include <cmath>
using namespace std;

int main() {
int opcao;
	float area_setor,angulo,area_cincunferencia,comprimento,r,PI=3.14;
	//menu de opções
	cout << "Digite o angulo central" << endl;
	cin >> angulo;
	cout << "Digite o comprimento do raio?"<< endl;
	cin >> r;
	
	cout << "==========Menu de Opcoes=========="<< endl;
    cout << "1. Opcao 1"<< endl;
    cout << "2. Opcao 2"<< endl;
    cout << "3. Opcao 3"<< endl;
    cout << "Escolha uma opcao: "<< endl;
    
	
	//contas
	if(opcao==1){
		cout << "Voce escolheu a Opcao 1"<< endl;
	    comprimento = 2*PI*r;
	    cout << "O comprimento da cincunferencia eh:"<< endl;
	    cin >> comprimento;
	}
	
	//conta 2
	else if(opcao == 2){
	    area_cincunferencia = PI * r*r;
	    cout << " A area da cinfunferencia eh:"<< endl;
	    cin >> area_cincunferencia;
	}
	else if (opcao==3){
	    area_setor=angulo*PI*r*r/360;
	    cout<<"A area setor eh:"<< endl;
	    cin>>area_setor;
}else{
	cout << " Tente Novamente Valor Invalido"<< endl;
}
return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
