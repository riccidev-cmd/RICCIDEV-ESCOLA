#include <iostream>
#include <cmath>
using namespace std;

int main() {
       float raio, angulo, PI=3.14 , comprimento , area_setor , area_circunferencia;
       //ta apaixonada por si msm
       
       cout << " Digite o Valor do Raio:"<< raio << endl;
       cin >> raio;
       cout << " Digite o Valor do Angulo:" << angulo << endl;
       cin >> angulo;
       
       cout << " =====Veja as contas=====" << endl;
       //todo de preto
       cout << " O Valor do Comprimento da Cincuferencia eh de::"<< endl;
	   comprimento = 2 * PI * raio;
       cin >> comprimento; 
       cout << " O Valor da Area desse Cincunferencia eh de:" << endl;
       
	   area_cincunferencia = PI * (raio * raio);
       cin >> area_cincunferencia;
       cout << " O Valor da Area Setor eh de:"<< endl;
       area_setor = angulo * PI * (raio * raio)/360;
       cin >> area_setor;
       
	return 0;
}
