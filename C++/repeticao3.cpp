#include <iostream>
#include <cmath>
using namespace std;

int main() {
int opcao, repeticoes;
	float  area_setor = 0, angulo , area_cincunferencia = 0, comprimento = 0, PI=3.14 , R ;
	
	//aplico 
	cout << " Quantas vezes deseja q este Calculo se Repita:" << endl;
	cin >> repeticoes; 
	
	cout << "Digite o angulo central";
	  cin >> angulo;
	  cout << "Digite o comprimento do raio?";
	  cin >> R;
	  
	for (int i = 0; i < repeticoes; i++) {
	cout << "Menu de Opcoes"<< endl;
    cout << "1. Opcao 1: Comprimento"<< endl;
    cout << "2. Opcao 2: Cincunferencia" << endl;
    cout << "3. Opcao 3: Area Setor"<< endl;
    cout << "Escolha uma opcao:"<< endl;
    cin >> opcao;
    
	//contas
	
	if(opcao == 1 ){
		cout << "Voce escolheu a Opcao 1" << comprimento << endl;
		
	comprimento = 2 * PI * R;
	
	cout << "O comprimento da cincunferencia eh:"<< endl;

	}
	
	else if(opcao == 2){
		cout << "Voce escolheu a Opcao 2" << area_cincunferencia << endl;
		
	area_cincunferencia = PI * R * R;
	
	cout << " A Area da Cinfunferencia eh:" << endl;
	
	}
	else if (opcao==3){
	area_setor=angulo * PI * R * R/360 ;
	
	cout << "Voce escolheu a Opcao 3" << area_setor << endl;
	
	cout<<"A Area Setor eh:" << endl;
}else{
	
}

}
	
	//good night menina
	return 0;
}
	
