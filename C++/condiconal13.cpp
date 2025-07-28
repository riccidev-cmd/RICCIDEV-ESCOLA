#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    float a, b, c;
    float delta, x1, x2;

   
    cout << "Digite o valor de a (coeficiente do termo quadrado): ";
    cin >> a;
    cout << "Digite o valor de b (coeficiente do termo linear): ";
    cin >> b;
    cout << "Digite o valor de c (constante): ";
    cin >> c;

   
    delta = (b * b) - (4 * a * c);

    
    if (delta > 0) {
       
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "A equacao tem duas raizes reais e distintas: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (delta == 0) {
        
        x1 = -b / (2 * a);
        cout << "A equacao tem uma raiz real dupla: " << endl;
        cout << "x1 = x2 = " << x1 << endl;
    } else {
     
        cout << "A equacao nao tem raizes reais." << endl;
    }

    return 0;
}
