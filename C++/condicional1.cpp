#include <iostream>

using namespace std;

int main() {
    // Variáveis para armazenar as notas
    float nota_lab, nota_semestral, nota_exame, media_ponderada;
    
  
    cout << "Digite a nota do Trabalho de Laboratório: ";
    cin >> nota_lab;
    cout << "Digite a nota da Avaliação Semestral: ";
    cin >> nota_semestral;
    cout << "Digite a nota do Exame Final: ";
    cin >> nota_exame;
    

    media_ponderada = (nota_lab * 2 + nota_semestral * 3 + nota_exame * 5) / 10;
    
 
    cout << "Média Ponderada: " << media_ponderada << endl;
    
    // Determina e exibe o conceito
    if (media_ponderada >= 8 && media_ponderada <= 10) {
        cout << "Conceito: MB - Muito Bom" << endl;
    } else if (media_ponderada >= 7 && media_ponderada < 8) {
        cout << "Conceito: B - Bom" << endl;
    } else if (media_ponderada >= 6 && media_ponderada < 7) {
        cout << "Conceito: R - Regular" << endl;
    } else {
        cout << "Conceito: I - Insuficiente" << endl;
    }
    
    return 0;
}

