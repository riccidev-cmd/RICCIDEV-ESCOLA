#include <iostream>
using namespace std;

int main() {
    int horaInicio, minutoInicio, horaFim, minutoFim;
    
    int duracaoHoras, duracaoMinutos;
    
    cout << "Digite a hora de in�cio do jogo (hora minuto): ";
    cin >> horaInicio >> minutoInicio;

    cout << "Digite a hora de t�rmino do jogo (hora minuto): ";
    cin >> horaFim >> minutoFim;

  
    int inicioEmMinutos = horaInicio * 60 + minutoInicio;
    int fimEmMinutos = horaFim * 60 + minutoFim;

 
    if (fimEmMinutos < inicioEmMinutos) {
        fimEmMinutos += 24 * 60; 
    }

    int duracaoTotalMinutos = fimEmMinutos - inicioEmMinutos;


    duracaoHoras = duracaoTotalMinutos / 60;
    duracaoMinutos = duracaoTotalMinutos % 60;

  
    cout << "A dura��o do jogo foi de " << duracaoHoras << " horas e " << duracaoMinutos << " minutos." << endl;

    return 0;
}

