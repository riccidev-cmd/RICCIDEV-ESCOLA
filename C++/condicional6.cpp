#include <iostream>
using namespace std;

int main() {
    int horaInicio, minutoInicio, horaFim, minutoFim;
    
    int duracaoHoras, duracaoMinutos;
    
    cout << "Digite a hora de início do jogo (hora minuto): ";
    cin >> horaInicio >> minutoInicio;

    cout << "Digite a hora de término do jogo (hora minuto): ";
    cin >> horaFim >> minutoFim;

  
    int inicioEmMinutos = horaInicio * 60 + minutoInicio;
    int fimEmMinutos = horaFim * 60 + minutoFim;

 
    if (fimEmMinutos < inicioEmMinutos) {
        fimEmMinutos += 24 * 60; 
    }

    int duracaoTotalMinutos = fimEmMinutos - inicioEmMinutos;


    duracaoHoras = duracaoTotalMinutos / 60;
    duracaoMinutos = duracaoTotalMinutos % 60;

  
    cout << "A duração do jogo foi de " << duracaoHoras << " horas e " << duracaoMinutos << " minutos." << endl;

    return 0;
}

