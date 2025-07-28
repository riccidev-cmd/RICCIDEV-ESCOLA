#include <iostream>
#include <cmath>
#include <locale>
using namespace std;
int main(){
        int alunos;
        float trabalho,avaliacao,exame,media;
        
        // duas la do cone q gosta da bagaceira
        cout << "=Digite Aqui A Sua Nota de Trabalho=:";
        cin >> trabalho;
        
	    cout << "=Digite Aqui A Sua Nota da Avalicao Semestral=:";
	    cin >> avaliacao;
	    
	    cout << "=Digite Aqui A Sua Nota de Exame=:"; 
	    cin >> exame;
	    
	    media = (trabalho * 2 + avaliacao * 3 + exame * 5 )/(2 + 3 + 5);
	    
	     cout << "=A Media Ponderada Das Suas Notas Sao=:"<< media << endl;

	    
	    
	    if(media >= 8 && media <= 10){
	    	cout << "==Sua Nota Foi MB=="<< endl;
		}
		else if(media >= 7 && media <= 8 ){
			cout << "==Sua Nota Foi B==" << endl;
		}
		else if (media >= 6 && media <= 7 ){
			cout << "==Sua Nota foi R=="<< endl;
        }
        else if (media >= 0 && media <= 6){
        	cout << "==Sua Nota foi I=="<< endl;
		}else{
			cout << "Nota invalida!" << endl;
		}
		
		cout << "=Quantos Alunos Tem Sua Sala=:";
		cin >> alunos;
		
		for (int i = 1; i <= alunos; i++){
			cout << "Digite As Notas dos Alunos"<< i << ":"<< endl;
			
			 cout << "=Digite Aqui A Sua Nota de Trabalho=:";
             cin >> trabalho;
        
	         cout << "=Digite Aqui A Sua Nota da Avalicao Semestral=:";
	         cin >> avaliacao;
	    
	         cout << "=Digite Aqui A Sua Nota de Exame=:"; 
	        cin >> exame;
		
		media = (trabalho * 2 + avaliacao * 3 + exame * 5 )/(2 + 3 + 5);
		cout << " Media do Aluno"<< i << ":" << media << endl;
		
		if(media >= 8 && media <= 10){
	    	cout << "==Sua Nota Foi MB=="<< endl;
		}
		else if(media >= 7 && media <= 8 ){
			cout << "==Sua Nota Foi B==" << endl;
		}
		else if (media >= 6 && media <= 7 ){
			cout << "==Sua Nota foi R=="<< endl;
        }
        else if (media >= 0 && media <= 6){
        	cout << "==Sua Nota foi I=="<< endl;
		}else{
			cout << "Nota invalida!" << endl;
		}
		
		}
		
	return 0;
}
